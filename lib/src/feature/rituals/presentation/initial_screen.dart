import 'dart:async';

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/rendering.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/routes/route_value.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/core/utils/size_utils.dart';
import 'package:haker_ball/src/feature/rituals/bloc/user_bloc.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:haker_ball/ui_kit/app_button.dart';
import 'package:haker_ball/ui_kit/sound_button.dart';

class InitialScreen extends StatelessWidget {
  final int id;
  const InitialScreen({super.key, required this.id});

  @override
  Widget build(BuildContext context) {
    return BlocBuilder<UserBloc, UserState>(
      builder: (context, state) {
        if (state is! UserLoaded) {
          return const Center(child: CircularProgressIndicator());
        }
        return SafeArea(
          child: SingleChildScrollView(
            child: Column(
              children: [
                Padding(
                  padding: const EdgeInsets.all(20.0),
                  child: Row(
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
                              }),
                          Gap(15),
                          SoundButton(),
                        ],
                      ),
                      Text("GATE ${id + 1}"),
                    ],
                  ),
                ),
                SizedBox(
                  height:isIpad(context)?800:400,
                  width: isIpad(context)?606:343,
                  child: Stack(
                    alignment: Alignment.center,
                    children: [
                      AppIcon(
                        asset: IconProvider.lore.buildImageUrl(),
                        height:isIpad(context)?800:400,
                        width: isIpad(context)?686:343,
                        fit: BoxFit.fill,
                      ),
                      Padding(
                        padding: const EdgeInsets.symmetric(
                            horizontal: 22, vertical: 0),
                        child: AutoScrollText(
                          text: state.levels[id].lore,
                        ),
                      ),
                    ],
                  ),
                ),
                AppButton(
                    color: ButtonColors.yellow,
                    onPressed: () {
                      context.pushReplacement(
                        "${RouteValue.home.path}/${RouteValue.select.path}/${RouteValue.initial.path}/${RouteValue.game.path}",
                        extra: id,
                      );
                    },
                    title: "Let`s GO!")
              ],
            ),
          ),
        );
      },
    );
  }
}

class AutoScrollText extends StatefulWidget {
  final String text;

  const AutoScrollText({Key? key, required this.text}) : super(key: key);

  @override
  _AutoScrollTextState createState() => _AutoScrollTextState();
}

class _AutoScrollTextState extends State<AutoScrollText> {
  final ScrollController _scrollController = ScrollController();
  Timer? _timer;
  bool _isUserScrolling = false;
  double _scrollSpeed = 1.5; // Скорость авто-скролла

  @override
  void initState() {
    super.initState();
    _startAutoScroll();
  }

  void _startAutoScroll() {
    _timer?.cancel();
    _timer = Timer.periodic(Duration(milliseconds: 50), (timer) {
      if (!_isUserScrolling) {
        double maxScroll = _scrollController.position.maxScrollExtent;
        double currentOffset = _scrollController.offset;

        if (currentOffset < maxScroll) {
          _scrollController.animateTo(
            currentOffset + _scrollSpeed,
            duration: Duration(milliseconds: 50),
            curve: Curves.linear,
          );
        } else {
          _timer?.cancel(); // Останавливаем таймер, если дошли до конца
        }
      }
    });
  }

  void _onUserScroll() {
    _isUserScrolling = true;
    _timer?.cancel();
    _timer = Timer(Duration(seconds: 3), () {
      _isUserScrolling = false;
      _startAutoScroll();
    });
  }

  @override
  Widget build(BuildContext context) {
    return NotificationListener<ScrollNotification>(
      onNotification: (notification) {
        if (notification is UserScrollNotification &&
            notification.direction != ScrollDirection.idle) {
          _onUserScroll();
        }
        return true;
      },
      child: SingleChildScrollView(
        controller: _scrollController,
        child: Padding(
          padding: EdgeInsets.all(16.0),
          child: Text(
            widget.text,
            style: TextStyle(fontSize: isIpad(context)?40:24, fontFamily: "AV Fontimer"),
            textAlign: TextAlign.center,
          ),
        ),
      ),
    );
  }

  @override
  void dispose() {
    _timer?.cancel();
    _scrollController.dispose();
    super.dispose();
  }
}
