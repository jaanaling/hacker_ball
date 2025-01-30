import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/feature/rituals/bloc/user_bloc.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';

class AchievementScreen extends StatelessWidget {
  const AchievementScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return BlocBuilder<UserBloc, UserState>(
      builder: (context, state) {
        if (state is UserLoaded) {
          return SingleChildScrollView(
            child: SafeArea(
              child: Padding(
                padding: const EdgeInsets.symmetric(horizontal: 14),
                child: Column(
                  children: [
                    Gap(15),
                    Align(
                      alignment: Alignment.topLeft,
                      child: AnimatedButton(
                          child: AppIcon(
                            asset: IconProvider.back.buildImageUrl(),
                            width: 63,
                            height: 63,
                          ),
                          onPressed: () {  context.pop();}),
                    ),
                    Gap(24),
                    Text(
                      'BIT COLLECTION',
                    ),
                    Gap(29),
                    Wrap(
                      spacing: 16,
                      runSpacing: 16,
                      children: state.achievements.map((achievement) {
                        return AnimatedButton(
                          onPressed: () {
                            _showDialog(context, achievement.description,
                                achievement.title);
                          },
                          child: Stack(
                            alignment: Alignment.center,
                            children: [
                              ClipOval(
                                child: AppIcon(
                                  asset: IconProvider.achiv.buildImageUrl(),
                                  width: 106,
                                  height: 106,
                                  color: state.user.achievements
                                          .contains(achievement.id)
                                      ? const Color(0xFF12fc06)
                                      : null,
                                  blendMode: BlendMode.color,
                                ),
                              ),
                              SizedBox(
                                width: 106,
                                height: 106,
                                child: Center(
                                  child: Padding(
                                    padding: const EdgeInsets.symmetric(
                                        horizontal: 11, vertical: 6),
                                    child: Text(
                                      achievement.title,
                                      textAlign: TextAlign.center,
                                      style: TextStyle(
                                        color: Colors.white,
                                        fontSize: 12,
                                      ),
                                    ),
                                  ),
                                ),
                              ),
                            ],
                          ),
                        );
                      }).toList(),
                    ),
                  ],
                ),
              ),
            ),
          );
        } else {
          return Center(
            child: CircularProgressIndicator(
              color: Color(0xFFFF00FB),
            ),
          );
        }
      },
    );
  }
}

void _showDialog(BuildContext context, String text, String title) {
  showCupertinoModalPopup<void>(
    barrierColor: Color.fromARGB(193, 30, 0, 76),
    context: context,
    builder: (BuildContext context) => SizedBox(
      height: 224,
      child: Stack(
        children: [
          Positioned(
            bottom: -224,
            child: AppIcon(
              asset: IconProvider.lore.buildImageUrl(),
              width: 343,
              height: 448,
              fit: BoxFit.fill,
            ),
          ),
          SizedBox(
            height: 224,
            width: 343,
            child: Padding(
              padding:
                  const EdgeInsets.symmetric(vertical: 33.0, horizontal: 23),
              child: Column(
                children: [
                  Text(
                    text,
                    style: TextStyle(fontSize: 26, fontFamily: "AV Fontimer"),
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    ),
  );
}
