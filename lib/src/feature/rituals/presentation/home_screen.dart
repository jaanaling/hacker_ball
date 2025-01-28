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
import 'package:haker_ball/ui_kit/tips_block.dart';

class HomeScreen extends StatelessWidget {
  const HomeScreen({super.key});

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
                      AnimatedButton(child: AppIcon(asset: IconProvider.achievements.buildImageUrl(),  width: 63,
                        height: 63,), onPressed: (){

                      }),
                      TipsBlock(tipsCount: 12)
                    ],
                  ),
                  Gap(15),
                  Stack(
                    alignment: Alignment.center,
                    children: [
                      AppIcon(
                        asset: IconProvider.mainBall.buildImageUrl(),
                        width: 181,
                        height: 181,
                      ),
                      Text(
                        'WHITE',
                        textAlign: TextAlign.center,
                        style: TextStyle(
                          color: Colors.white,
                          fontSize: 37,
                          fontFamily: 'Gunterz',
                          fontWeight: FontWeight.w500,
                        ),
                      )
                    ],
                  ),
                  Gap(12),
                  Text(
                    'Challenge your mind every day!',
                    style: TextStyle(
                      color: Colors.white,
                      fontSize: 16,
                      fontFamily: 'Montserrat',
                      fontWeight: FontWeight.w500,
                    ),
                  ),
                  Gap(35),
                  AppButton(color: ButtonColors.purple, onPressed: (){

                  }, title: 'select level'),
                  Gap(15),
                  AppButton(color: ButtonColors.purple, onPressed: (){

                  }, title: 'Daily'),
                  Gap(15),
                  AppButton(color: ButtonColors.purple, onPressed: (){

                  }, title: 'articles'),
                  Gap(12),
                  Text(
                    'Daily tip: ${shortTips[DateTime.now().weekday - 1]}',
                    style: TextStyle(
                      color: Colors.white,
                      fontSize: 16,
                      fontFamily: 'Montserrat',
                      fontWeight: FontWeight.w500,
                    ),
                  )
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

      ],
    );
  }
}

