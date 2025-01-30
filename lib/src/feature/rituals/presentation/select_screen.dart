import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_svg/svg.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/routes/route_value.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/feature/rituals/bloc/user_bloc.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:haker_ball/ui_kit/app_button.dart';

class SelectScreen extends StatelessWidget {
  const SelectScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return BlocBuilder<UserBloc, UserState>(
      builder: (context, state) {
        if (state is! UserLoaded) {
          return const Center(child: CircularProgressIndicator());
        }
        return SingleChildScrollView(
          child: SafeArea(
            child: Column(
              children: [
                Padding(
                  padding: const EdgeInsets.all(20.0),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      AnimatedButton(
                          child: AppIcon(
                            asset: IconProvider.back.buildImageUrl(),
                            width: 63,
                            height: 63,
                          ),
                          onPressed: () {
                            context.pop();
                          }),
                      AnimatedButton(
                          child: AppIcon(
                            asset: IconProvider.achievements.buildImageUrl(),
                            width: 63,
                            height: 63,
                          ),
                          onPressed: () {
                            context.push(
                              "${RouteValue.home.path}/${RouteValue.achievements.path}",
                            );
                          }),
                    ],
                  ),
                ),
                Padding(
                  padding: const EdgeInsets.all(16.0),
                  child: GridView.count(
                    shrinkWrap: true,
                    physics: const NeverScrollableScrollPhysics(),
                    crossAxisCount: 3,
                    mainAxisSpacing: 16,
                    crossAxisSpacing: 16,
                    children: List.generate(state.levels.length, (index) {
                      final level = state.levels[index];
                      final user = state.user;

                      return AnimatedButton(
                        onPressed: () {
                          if (index <= user.puzzlesSolved)
                            context.push(
                              "${RouteValue.home.path}/${RouteValue.select.path}/${RouteValue.initial.path}",
                              extra: index,
                            );
                          else {
                            _showDialog(
                              context,
                            );
                          }
                        },
                        child: Stack(
                          alignment: Alignment.center,
                          children: [
                            AppIcon(
                              asset: IconProvider.level.buildImageUrl(),
                              fit: BoxFit.cover,
                            ),
                            Column(
                              mainAxisAlignment: MainAxisAlignment.center,
                              children: [
                                if (index <= user.puzzlesSolved)
                                  Column(
                                    children: [
                                      Text(
                                        (index + 1).toString(),
                                      ),
                                      Star(
                                        score: level.score ?? 0,
                                      ),
                                    ],
                                  )
                                else
                                  Padding(
                                    padding: const EdgeInsets.all(20.0),
                                    child: AppIcon(
                                      asset: IconProvider.lock.buildImageUrl(),
                                      fit: BoxFit.cover,
                                    ),
                                  ),
                              ],
                            ),
                          ],
                        ),
                      );
                    }),
                  ),
                ),
              ],
            ),
          ),
        );
      },
    );
  }
}

Future<void> _showDialog(BuildContext context) async {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return Dialog(
        backgroundColor: Colors.transparent,
        child: SizedBox(
          width: 327,
          height: 400,
          child: Column(
            children: [
              Stack(
                alignment: Alignment.center,
                children: [
                  AppIcon(
                      width: 327,
                      height: 233,
                      asset: IconProvider.panel.buildImageUrl()),
                  const Padding(
                    padding: EdgeInsets.symmetric(
                      horizontal: 24,
                      vertical: 48,
                    ),
                    child: Column(
                      children: [
                        Text(
                          'Go through the previous level',
                          textAlign: TextAlign.center,
                          style: TextStyle(
                            fontFamily: 'Purple',
                            fontSize: 27,
                            color: Colors.white,
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
              Align(
                alignment: Alignment.bottomCenter,
                child: AppButton(
                  color: ButtonColors.purple,
                  onPressed: () {
                    context.pop();
                  },
                  title: "OK",
                ),
              ),
            ],
          ),
        ),
      );
    },
  );
}

class Star extends StatelessWidget {
  final int score;

  const Star({Key? key, required this.score}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    // Размер звезды
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 8),
      child: Row(
        mainAxisAlignment:
            MainAxisAlignment.center, // Для выравнивания по центру
        children: [
          AppIcon(
            asset: score > 0
                ? IconProvider.star.buildImageUrl()
                : IconProvider.starGrey.buildImageUrl(),
            fit: BoxFit.fitHeight,
            // width: size,
            // height: size,
          ),
           Gap(score > 0? 0:2),
          AppIcon(
            asset: score > 1
                ? IconProvider.star.buildImageUrl()
                : IconProvider.starGrey.buildImageUrl(),
            fit: BoxFit.fitHeight,
            // width: size,
            // height: size,
          ),
           Gap(score > 1? 0:2),
          AppIcon(
            asset: score > 2
                ? IconProvider.star.buildImageUrl()
                : IconProvider.starGrey.buildImageUrl(),
            fit: BoxFit.fitHeight,
            // width: size,
            // height: size,
          ),
        ],
      ),
    );
  }
}
