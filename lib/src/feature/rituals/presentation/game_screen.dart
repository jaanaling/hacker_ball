import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/routes/route_value.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/core/utils/size_utils.dart';
import 'package:haker_ball/src/feature/rituals/bloc/user_bloc.dart';
import 'package:haker_ball/src/feature/rituals/presentation/select_screen.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:haker_ball/ui_kit/app_button.dart';
import 'package:haker_ball/ui_kit/gradient_text.dart';
import 'package:haker_ball/ui_kit/sound_button.dart';
import 'package:haker_ball/ui_kit/tips_block.dart';
import 'package:haptic_feedback/haptic_feedback.dart';
import 'dart:async'; // Для Timer

class GameScreen extends StatefulWidget {
  final int puzzleId;

  const GameScreen({super.key, required this.puzzleId});

  @override
  State<GameScreen> createState() => _QuizScreenState();
}

class _QuizScreenState extends State<GameScreen>
    with SingleTickerProviderStateMixin {
  List<String?> userInput = [];
  List<bool> showColors = [];
  int currentIndex = 0;

  // Анимация тряски
  late AnimationController _shakeController;
  late Animation<double> _shakeAnimation;

  final List<List<String>> keyboardRows = [
    ['Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'],
    ['A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'],
    ['Z', 'X', 'C', 'V', 'B', 'N', 'M', '⌫', "⎆"],
  ];

  // Запомним время старта
  late final DateTime startTime;

  // Переменные для таймера на 5 минут
  Timer? _countdownTimer;
  int _remainingSeconds = 5 * 60; // 5 минут = 300 секунд

  @override
  void initState() {
    super.initState();
    _shakeController = AnimationController(
      vsync: this,
      duration: const Duration(milliseconds: 500),
    );
    _shakeAnimation = Tween<double>(begin: 0, end: 10)
        .chain(CurveTween(curve: Curves.elasticIn))
        .animate(_shakeController);

    // Запускаем отсчет времени с момента входа на экран
    startTime = DateTime.now();

    // Инициализируем таймер обратного отсчёта на 5 минут
    _startCountdownTimer();
  }

  @override
  void dispose() {
    _shakeController.dispose();
    // Не забудем отменить таймер при выходе со страницы
    _countdownTimer?.cancel();
    super.dispose();
  }

  /// Запуск отсчёта на 5 минут
  void _startCountdownTimer() {
    _countdownTimer = Timer.periodic(const Duration(seconds: 1), (timer) {
      if (_remainingSeconds > 0) {
        setState(() {
          _remainingSeconds--;
        });
      } else {
        // Время вышло - проигрыш
        timer.cancel();
        _handleTimeout();
      }
    });
  }

  /// Когда время вышло — показать проигрыш (можно расширить логику)
  void _handleTimeout() {
    // Показываем диалог проигрыша и/или совершаем нужные действия
    showResult(0, false); // 0 очков, поражение
  }

  /// Простейшая функция для подсчёта очков от 1 до 3
  /// в зависимости от скорости прохождения (можно настроить по своему желанию).
  int _calculateScore(Duration elapsed) {
    final seconds = elapsed.inSeconds;
    // Пример простой логики:
    // - < 60 cек => 3
    // - < 120 cек => 2
    // - < 300 cек (но до 5 минут) => 1
    // - иначе => 0
    if (seconds <= 60) {
      return 3;
    } else if (seconds <= 120) {
      return 2;
    } else if (seconds < 300) {
      return 1;
    }
    return 0;
  }

  @override
  Widget build(BuildContext context) {
    return BlocBuilder<UserBloc, UserState>(
      builder: (context, state) {
        if (state is UserLoading) {
          return const Scaffold(
            body: Center(child: CircularProgressIndicator()),
          );
        }

        if (state is UserError) {
          return Scaffold(body: Center(child: Text(state.message)));
        }

        if (state is UserLoaded) {
          final riddle = state.levels[widget.puzzleId];
          final answerStr = riddle.word;
          final answer = answerStr.split('');
          final answerLength = answer.length;
          final words = answerStr.split(' ');

          userInput =
              userInput.isEmpty ? List.filled(answerLength, null) : userInput;
          showColors = showColors.isEmpty
              ? List.filled(answerLength, false)
              : showColors;

          return SafeArea(
            child: Focus(
              autofocus: true,
              onKey: (FocusNode node, RawKeyEvent event) {
                if (event is RawKeyDownEvent) {
                  handleKeyInput(event.logicalKey, answerLength, answer);
                }
                return KeyEventResult.handled;
              },
              child: LayoutBuilder(
                builder: (context, constraints) {
                  final screenWidth = constraints.maxWidth;
                  final screenHeight = constraints.maxHeight;

                  final cellWidth =
                      screenWidth * (isIpad(context) ? 0.1 : 0.15);

                  final int maxRowLength = keyboardRows
                      .map((row) => row.length)
                      .reduce((a, b) => a > b ? a : b);

                  final keyWidth = (screenWidth -
                          (maxRowLength * (isIpad(context) ? 3 : 2))) /
                      (maxRowLength + 0.5);

                  return Stack(
                    children: [
                      SingleChildScrollView(
                        padding: EdgeInsets.only(bottom: 89 * 4),
                        child: SafeArea(
                          bottom: false,
                          child: Center(
                            child: Column(
                              children: [
                                const Gap(110),
                                Padding(
                                  padding: const EdgeInsets.symmetric(
                                    horizontal: 20,
                                  ),
                                  child: Stack(
                                    alignment: Alignment.center,
                                    children: [
                                      AppIcon(
                                        asset:
                                            IconProvider.panel.buildImageUrl(),
                                        // height: isIpad(context) ? 250 : 128,
                                        width: isIpad(context) ? 712 : 306,
                                        fit: BoxFit.fitWidth,
                                      ),
                                      Padding(
                                        padding: const EdgeInsets.all(16.0),
                                        child: SizedBox(
                                          width: isIpad(context) ? 548 : 274,
                                          child: Center(
                                            child: Text(
                                              riddle.hint,
                                              style:  TextStyle(fontSize: isIpad(context) ? 40 : 20),
                                            ),
                                          ),
                                        ),
                                      ),
                                    ],
                                  ),
                                ),
                                SizedBox(height: screenHeight * 0.02),
                                // Отображение таймера (если нужно)
                                Text(
                                  _formatTime(_remainingSeconds),
                                  style: const TextStyle(
                                    fontSize: 24,
                                    fontWeight: FontWeight.bold,
                                    color: Colors.red,
                                  ),
                                ),
                                SizedBox(height: screenHeight * 0.05),
                                AnimatedBuilder(
                                  animation: _shakeController,
                                  builder: (context, child) {
                                    return Transform.translate(
                                      offset: Offset(
                                        _shakeAnimation.value *
                                            (_shakeController.isAnimating
                                                ? 1
                                                : 0),
                                        0,
                                      ),
                                      child: child,
                                    );
                                  },
                                  child: _buildAnswerLines(
                                    words,
                                    answer,
                                    cellWidth,
                                    cellWidth,
                                  ),
                                ),
                              ],
                            ),
                          ),
                        ),
                      ),
                      Positioned(
                        bottom: 0,
                        child: Padding(
                          padding: const EdgeInsets.only(bottom: 65),
                          child: _buildKeyboard(
                            answerLength,
                            answer,
                            keyWidth,
                            keyWidth,
                            state.user.hints,
                          ),
                        ),
                      ),
                      Row(
                        mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          Row(
                            children: [
                              AnimatedButton(
                                child: AppIcon(
                                  asset: IconProvider.back.buildImageUrl(),
                                  width:isIpad(context)?90:63,
                                  fit: BoxFit.fitWidth,
                                ),
                                onPressed: () {
                                  context.pop();
                                },
                              ),
                              Gap(15),
                              SoundButton(),
                            ],
                          ),
                          TipsBlock(
                            tipsCount: state.user.hints,
                            onPressed: () {
                              revealHint(answer);
                            },
                          ),
                        ],
                      ),
                    ],
                  );
                },
              ),
            ),
          );
        }
        return const SizedBox.shrink();
      },
    );
  }

  /// Форматируем секунды в строку "MM:SS"
  String _formatTime(int totalSeconds) {
    final minutes = (totalSeconds ~/ 60).toString().padLeft(2, '0');
    final seconds = (totalSeconds % 60).toString().padLeft(2, '0');
    return '$minutes:$seconds';
  }

  /// Отображаем ответ построчно по словам, пропуская пробелы в answer.
  Widget _buildAnswerLines(
    List<String> words,
    List<String> answer,
    double cellWidth,
    double cellHeight,
  ) {
    final List<Widget> lines = [];
    int charIndex = 0;

    for (int w = 0; w < words.length; w++) {
      final word = words[w];
      final wordLength = word.length;
      // Ячейки одного слова
      final cells = List.generate(wordLength, (i) {
        final int index = charIndex + i;
        Color? color;
        if (!showColors[index]) {
        } else {
          final bool isGreen =
              (userInput[index]?.toLowerCase() == answer[index].toLowerCase());
          color = isGreen
              ? const Color.fromARGB(255, 68, 209, 43)
              : const Color.fromRGBO(211, 38, 38, 1);
        }

        return SizedBox(

          child: Stack(
            alignment: Alignment.center,
            children: [
              AppIcon(
                width: cellWidth,
                height: cellHeight,
                asset: IconProvider.answ.buildImageUrl(),
                color: color,
                blendMode: BlendMode.srcATop,
              ),
              Padding(
                padding: const EdgeInsets.only(top: 4),
                child: Text(
                  userInput[index] ?? '',
                  textAlign: TextAlign.center,
                  style: TextStyle(
                    fontSize: cellWidth * 0.6,
                  ),
                ),
              ),
            ],
          ),
        );
      });

      lines.add(
        Wrap(
          alignment: WrapAlignment.center,
          spacing: 10,
          runSpacing: 10,
          children: cells,
        ),
      );

      charIndex += wordLength;

      if (w < words.length - 1) {
        if (charIndex < answer.length && answer[charIndex] == ' ') {
          charIndex++;
        }

        lines.add(SizedBox(height: cellHeight * 0.5));
      }
    }

    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: lines,
    );
  }

  Widget _buildKeyboard(
    int answerLength,
    List<String> answer,
    double keyWidth,
    double keyHeight,
    int hintsCount,
  ) {
    bool allFilled = true;
    for (int i = 0; i < answerLength; i++) {
      if (answer[i] == ' ') continue;
      if (userInput[i] == null) {
        allFilled = false;
        break;
      }
    }

    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: keyboardRows.map((row) {
        return Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: row.map((letter) {
            final bool isWideButton = letter == '⎆';

            return Padding(
              padding: const EdgeInsets.symmetric(horizontal: 2, vertical: 7.0),
              child: AnimatedButton(
                onPressed: ((isWideButton && !allFilled))
                    ? () {}
                    : () => handleLetterInput(letter, answerLength, answer),
                child: SizedBox(
                  width: keyWidth,
                  height: keyHeight,
                  child: Stack(
                    alignment: Alignment.center,
                    children: [
                      AppIcon(
                        asset: IconProvider.key.buildImageUrl(),
                        color:
                            (isWideButton && !allFilled) ? Colors.grey : null,
                        blendMode: BlendMode.srcATop,
                        fit: BoxFit.fill,
                        width: keyWidth,
                        height: keyHeight,
                      ),
                      FittedBox(
                        fit: BoxFit.scaleDown,
                        child: Text(
                          letter,
                          style: TextStyle(
                            fontSize: isIpad(context) ? 30 : 20,
                            color: const Color(0xFFFF93FD),
                            fontWeight: FontWeight.w400,
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
            );
          }).toList(),
        );
      }).toList(),
    );
  }

  void revealHint(List<String> answer) {
    if ((context.read<UserBloc>().state as UserLoaded).user.hints != 0) {
      for (int i = 0; i < answer.length; i++) {
        if (answer[i] == ' ') continue;
        final bool isGreen = showColors[i] &&
            userInput[i]?.toLowerCase() == answer[i].toLowerCase();
        if (!isGreen) {
          // Списываем подсказку
          context.read<UserBloc>().add(const UserHintUsed());
          userInput[i] = answer[i].toUpperCase();

          showColors[i] = true;
          setState(() {});
          break;
        }
      }
    }
  }

  void handleLetterInput(String letter, int answerLength, List<String> answer) {
    setState(() {
      if (letter == '⌫') {
        handleBackspace(answer);
      } else if (letter == '⎆') {
        handleConfirm(answerLength, answer);
      } else {
        handleCharacterInput(letter, answer);
      }
    });
  }

  void handleBackspace(List<String> answer) {
    if (currentIndex > 0) {
      int eraseIndex = currentIndex - 1;
      while (eraseIndex >= 0) {
        if (answer[eraseIndex] == ' ') {
          eraseIndex--;
          continue;
        }
        final bool isGreen = showColors[eraseIndex] &&
            userInput[eraseIndex]?.toLowerCase() ==
                answer[eraseIndex].toLowerCase();
        if (isGreen) {
          eraseIndex--;
          continue;
        }
        break;
      }

      if (eraseIndex >= 0 && answer[eraseIndex] != ' ') {
        userInput[eraseIndex] = null;
        showColors[eraseIndex] = false;
        currentIndex = eraseIndex;
      }
    }
  }

  Future<void> handleConfirm(int answerLength, List<String> answer) async {
    bool allFilled = true;
    final canVibrate = await Haptics.canVibrate();
    for (int i = 0; i < answerLength; i++) {
      if (answer[i] == ' ') continue;
      if (userInput[i] == null) {
        allFilled = false;
        break;
      }
    }

    if (allFilled) {
      showColors = List.generate(userInput.length, (i) => true);

      bool isCorrect = true;
      for (int i = 0; i < answerLength; i++) {
        if (answer[i] == ' ') continue;
        if (userInput[i]?.toLowerCase() != answer[i].toLowerCase()) {
          isCorrect = false;
          break;
        }
      }

      if (!isCorrect) {
        _shakeController.reset();
        _shakeController.forward();
        if (canVibrate) {
          await Haptics.vibrate(HapticsType.error);
        }
        return;
      } else {
        // Если слово угадано — остановим таймер
        _countdownTimer?.cancel();

        if (canVibrate) {
          await Haptics.vibrate(HapticsType.success);
        }
        // Вычислим, сколько времени заняло решение
        final elapsed = DateTime.now().difference(startTime);
        final score = _calculateScore(elapsed);

        // Сразу сохраним результат (с очками)
        context.read<UserBloc>().add(
              UserPuzzleSolved(
                isCorrect: isCorrect,
                puzzleId: widget.puzzleId,
                score: score,
              ),
            );

        // Показываем итоговый результат
        showResult(score, true);
      }
    }
  }

  void handleCharacterInput(String letter, List<String> answer) {
    moveCurrentIndexForward(answer, currentIndex);

    if (currentIndex < userInput.length && answer[currentIndex] != ' ') {
      final bool isGreen = showColors[currentIndex] &&
          userInput[currentIndex]?.toLowerCase() ==
              answer[currentIndex].toLowerCase();
      if (!isGreen) {
        userInput[currentIndex] = letter.toUpperCase();
      }

      final int nextIndex = currentIndex + 1;
      moveCurrentIndexForward(answer, nextIndex);
    }
  }

  void moveCurrentIndexForward(List<String> answer, int startIndex) {
    int i = startIndex;
    while (i < userInput.length) {
      if (answer[i] == ' ') {
        i++;
        continue;
      }
      final bool isGreen = showColors[i] &&
          userInput[i]?.toLowerCase() == answer[i].toLowerCase();
      if (isGreen) {
        i++;
        continue;
      }
      break;
    }
    currentIndex = (i <= userInput.length) ? i : userInput.length;
  }

  void handleKeyInput(
    LogicalKeyboardKey key,
    int answerLength,
    List<String> answer,
  ) {
    final keyLabel = key.keyLabel.toUpperCase();
    if (keyLabel == 'BACKSPACE') {
      handleLetterInput('⌫', answerLength, answer);
    } else if (keyLabel.length == 1 && keyLabel.contains(RegExp('[A-Z]'))) {
      handleLetterInput(keyLabel, answerLength, answer);
    }
  }

  void showResult(int score, bool isWin) {
    showDialog(
      context: context,
      barrierColor: Colors.black.withOpacity(0.5),
      barrierDismissible: false,
      builder: (BuildContext context) {
        return Dialog(
          backgroundColor: Colors.transparent,
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Stack(
                alignment: Alignment.center,
                children: [
                  AppIcon(
                    asset: IconProvider.win.buildImageUrl(),
                    fit: BoxFit.cover,
                  ),
                  Positioned(
                    right: 10,
                    top: 10,
                    child: Column(
                      children: [
                        Star(score: score),
                        Gap(20),
                        Row(
                          crossAxisAlignment: CrossAxisAlignment.end,
                          children: [
                            Text(
                              "+$score",
                              style: TextStyle(
                                  fontSize: 52,
                                  fontFamily: "UNCAGE",
                                  fontWeight: FontWeight.bold),
                              textAlign: TextAlign.center,
                            ),
                            Gap(30),
                            AppIcon(
                              asset: IconProvider.tips.buildImageUrl(),
                              width: 50,
                            )
                          ],
                        ),
                      ],
                    ),
                  ),
                  Positioned(
                    left: 10,
                    top: 70,
                    child: GradientText(
                        isWin ? "You\nEscaped!" : "You're\nfound!!",
                        fontSize: 60,
                        gradientColor: [
                          const Color.fromARGB(213, 255, 255, 255),
                          const Color(0xFF4897FF),
                        ],
                        shaderColor: [
                          const Color(0xD600172C),
                          const Color(0xFF4897FF),
                        ]),
                  ),
                ],
              ),
              Align(
                alignment: Alignment.bottomCenter,
                child: AppButton(
                  color: ButtonColors.purple,
                  onPressed: () {
                    context
                      ..pop()
                      ..pushReplacement(
                          "${RouteValue.home.path}/${RouteValue.select.path}/${RouteValue.initial.path}",
                          extra: isWin ? widget.puzzleId + 1 : widget.puzzleId);
                  },
                  title: isWin ? "Go Next!" : "Restart",
                ),
              ),
            ],
          ),
        );
      },
    );
  }
}
