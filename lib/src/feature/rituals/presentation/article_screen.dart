import 'package:flutter/material.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';

import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';

import 'package:haker_ball/src/feature/rituals/model/article.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';

class ArticleScreen extends StatelessWidget {
  final Article article;
  const ArticleScreen({super.key, required this.article});

  @override
  Widget build(BuildContext context) {
    return Stack(
      children: [
        SingleChildScrollView(
          child: SafeArea(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 14),
              child: Column(
                children: [
                  Gap(15),
                  Row(
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
                        Gap(24),
                      ]),
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 5),
                    child: Padding(
                      padding: const EdgeInsets.symmetric(horizontal: 43),
                      child: Text(
                        article.title,
                        textAlign: TextAlign.center,
                      ),
                    ),
                  ),
                  Gap(45),
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 5),
                    child: Text(
                      article.content,
                      style: TextStyle(fontSize: 26, fontFamily: "AV Fontimer"),
                    ),
                  ),
                  Gap(20),
                ],
              ),
            ),
          ),
        ),
      ],
    );
  }
}
