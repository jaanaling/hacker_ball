import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/ui_kit/gradient_text.dart';

import 'animated_button.dart';

class AppButton extends StatelessWidget {
  final ButtonColors color;
  final VoidCallback onPressed;
  final String title;
  const AppButton({
    super.key,
    required this.color,
    required this.onPressed,
    required this.title,
  });

  @override
  Widget build(BuildContext context) {
    return AnimatedButton(
      child: Stack(
        alignment: Alignment.center,
        children: [
          AppIcon(
            asset: color == ButtonColors.purple
                ? IconProvider.purpleButton.buildImageUrl()
                : color == ButtonColors.blue
                    ? IconProvider.blueButton.buildImageUrl()
                    : IconProvider.yellowButton.buildImageUrl(),
          ),
          Padding(
            padding: const EdgeInsets.symmetric(horizontal: 36),
            child: FittedBox(
              fit: BoxFit.scaleDown,
              child: GradientText(
                title,
                gradientColor: color == ButtonColors.purple
                    ? [
                        const Color(0xFFFD9CFF),
                        const Color(0xFFDB32FD),
                      ]
                    : color == ButtonColors.blue
                        ? [
                            Colors.white,
                            Colors.white,
                          ]
                        : [
                            const Color(0xFFFFE89C),
                            const Color(0xFFFDD432),
                          ],
                shaderColor: color == ButtonColors.purple
                    ? [
                        const Color(0xD12C0022),
                        const Color(0xFFFF48D7),
                      ]
                    : color == ButtonColors.blue
                        ? [
                            const Color(0xD600172C),
                            const Color(0xFF4897FF),
                          ]
                        : [
                            const Color(0xD62C1B00),
                            const Color(0xFFFFC548),
                          ],
              ),
            ),
          ),
        ],
      ),
      onPressed: () {
        onPressed();
      },
    );
  }
}

enum ButtonColors { purple, blue, yellow }
