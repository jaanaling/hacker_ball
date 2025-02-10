import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/routes/go_router_config.dart';
import 'package:haker_ball/routes/route_value.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/core/utils/size_utils.dart';
import 'package:haker_ball/src/feature/rituals/bloc/user_bloc.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:haker_ball/ui_kit/app_button.dart';
import 'package:haker_ball/ui_kit/gradient_text.dart';
import 'package:haker_ball/ui_kit/sound_button.dart';
import 'package:haker_ball/ui_kit/tips_block.dart';
import 'package:just_audio/just_audio.dart';

class HomeScreen extends StatefulWidget {
  const HomeScreen({super.key});

  @override
  State<HomeScreen> createState() => _HomeScreenState();
}

class _HomeScreenState extends State<HomeScreen> {
  @override
  void initState() {
    // TODO: implement initState
    super.initState();
    playMusic();
  }

  @override
  Widget build(BuildContext context) {
    return BlocBuilder<UserBloc, UserState>(
      builder: (context, state) {
        if (state is! UserLoaded) {
          return Center(
            child: CircularProgressIndicator(),
          );
        }
        return SingleChildScrollView(
          child: SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 12),
              child: Column(
                children: [
                  Gap(15),
                  Row(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    children: [
                      Row(
                        children: [
                          AnimatedButton(
                              child: AppIcon(
                                asset:
                                    IconProvider.achievements.buildImageUrl(),
                                width:isIpad(context)?90:63,
                                fit: BoxFit.fitWidth,
                              ),
                              onPressed: () {
                                context.push(
                                  "${RouteValue.home.path}/${RouteValue.achievements.path}",
                                );
                              }),
                          Gap(15),
                          AnimatedButton(
                              child: AppIcon(
                                asset: 'assets/images/privacy policy.png',
                                width:isIpad(context)?90:63,
                                fit: BoxFit.fitWidth,
                              ),
                              onPressed: () {
                                context.push(
                                  "${RouteValue.home.path}/${RouteValue.privacy.path}",
                                );
                              }),
                          Gap(15),
                          SoundButton(),
                        ],
                      ),
                      TipsBlock(tipsCount: state.user.hints)
                    ],
                  ),
                  Gap(35),
                  AppButton(
                      color: ButtonColors.purple,
                      onPressed: () {
                        context.push(
                          "${RouteValue.home.path}/${RouteValue.select.path}",
                        );
                      },
                      title: 'Hack the world'),
                  AppButton(
                      color: ButtonColors.purple,
                      onPressed: () {
                        context.push(
                          "${RouteValue.home.path}/${RouteValue.articles.path}",
                        );
                      },
                      title: 'directory'),
                  Gap(12),
                  SizedBox(height: 167, child: _ClaimBlock()),
                ],
              ),
            ),
          ),
        );
      },
    );
  }
}

class _ClaimBlock extends StatelessWidget {
  const _ClaimBlock({super.key});

  @override
  Widget build(BuildContext context) {
    return Stack(
      children: [
        AppIcon(
          asset: IconProvider.day.buildImageUrl(),
          fit: BoxFit.fill,
        ),
        Positioned(
          top: 15,
          right: 30,
          child: Row(
            crossAxisAlignment: CrossAxisAlignment.end,
            children: [
              Text(
                "+2",
                style: TextStyle(fontSize: 52, fontFamily: "UNCAGE"),
                textAlign: TextAlign.center,
              ),
              Gap(30),
              AppIcon(
                asset: IconProvider.tips.buildImageUrl(),
                width: 50,
              )
            ],
          ),
        ),
        Positioned(
          top: 60,
          left: 30,
          child: GradientText("DAILY\nBITS", fontSize: 30, gradientColor: [
            const Color.fromARGB(213, 255, 255, 255),
            const Color(0xFF4897FF),
          ], shaderColor: [
            const Color(0xD600172C),
            const Color(0xFF4897FF),
          ]),
        ),
        if ((context.read<UserBloc>().state as UserLoaded).user.hints == 1 &&
            (context.read<UserBloc>().state as UserLoaded).user.hintsUsed == 0)
          Positioned(
            bottom: 0,
            right: 0,
            child: AnimatedButton(
              onPressed: () {
                context.read<UserBloc>().add(const UserDailyReward());
              },
              child: Stack(
                alignment: Alignment.center,
                children: [
                  AppIcon(
                    asset: IconProvider.claim.buildImageUrl(),
                    fit: BoxFit.fill,
                  ),
                  Padding(
                    padding: const EdgeInsets.only(left: 15),
                    child: GradientText("CLAIM", gradientColor: [
                      const Color(0xFFFFE89C),
                      const Color(0xFFFDD432),
                    ], shaderColor: [
                      const Color(0xFFFFE89C),
                      const Color(0xFFFDD432),
                    ]),
                  )
                ],
              ),
            ),
          ),
      ],
    );
  }
}
