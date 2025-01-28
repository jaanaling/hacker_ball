import 'package:flutter/material.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';

class TipsBlock extends StatelessWidget {
  final int tipsCount;
  const TipsBlock({super.key, required this.tipsCount});

  @override
  Widget build(BuildContext context) {
    return AnimatedButton(
        child: SizedBox(
          width: 150,
          height: 78,
          child: Stack(
            children: [
              AppIcon(
                asset: IconProvider.tipsBlock.buildImageUrl(),
                width: 150,
                height: 78,
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                children: [
                  SizedBox(
                    width: 72,
                    child: FittedBox(
                      fit: BoxFit.scaleDown,
                      child: Text(
                        tipsCount.toString(),
                        style: TextStyle(
                          color: Colors.white,
                          fontSize: 30,
                          fontFamily: 'UNCAGE',
                          fontWeight: FontWeight.w600,
                          letterSpacing: 1.50,
                        ),
                      ),
                    ),
                  ),
                  AppIcon(
                    asset: IconProvider.tips.buildImageUrl(),
                    width: 36,
                    height: 54,
                  ),
                ],
              ),
            ],
          ),
        ),
        onPressed: () {});
  }
}
