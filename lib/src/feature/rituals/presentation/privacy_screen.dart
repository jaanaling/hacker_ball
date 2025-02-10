import 'package:flutter/material.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/core/utils/size_utils.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:policy_viewer/privacy_screen.dart';

class PrivacyPolicyScreen extends StatelessWidget {
  const PrivacyPolicyScreen({super.key});

  @override
  Widget build(BuildContext context) {
    final _controller = PrivacyController();
    return ColoredBox(
      color: Color(0xFF6a0cad),
      child: Column(
        children: [
          Padding(
            padding: EdgeInsets.only(
                left: 8,
                top: MediaQuery.of(context).padding.top ,
                bottom: 0),
            child: Row(
              children: [
                AnimatedButton(
                  onPressed: () {
                    context.pop();
                  },
                  child: AppIcon(
                    asset: IconProvider.back.buildImageUrl(),
                    width: isIpad(context)?90:63,
                    fit: BoxFit.fitWidth,
                  ),
                ),
                Spacer(),
                Text('Privacy Policy'),
                Spacer()
              ],
            ),
          ),
          Expanded(
            child: PrivacyScreen(
                initialUrl: 'https://hackerballaa.com/privacy',
                controller: _controller,
                color: '#6a0cad'),
          )
        ],
      ),
    );
  }
}
