import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:gap/gap.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/routes/route_value.dart';
import 'package:haker_ball/src/core/utils/app_icon.dart';
import 'package:haker_ball/src/core/utils/icon_provider.dart';
import 'package:haker_ball/src/feature/rituals/bloc/user_bloc.dart';
import 'package:haker_ball/src/feature/rituals/model/article.dart';
import 'package:haker_ball/ui_kit/animated_button.dart';
import 'package:haker_ball/ui_kit/app_button.dart';

class ArticlesScreen extends StatelessWidget {
  const ArticlesScreen({super.key});

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
                    const Gap(15),
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
                          },
                        ),
                        const Text(
                          'DIRECTORY',
                        ),
                      ],
                    ),
                    ListView.builder(
                      shrinkWrap: true,
                      physics: const NeverScrollableScrollPhysics(),
                      itemBuilder: (BuildContext context, int index) =>
                          AppButton(
                        color: ButtonColors.purple,
                        onPressed: () {
                          context.push(
                            "${RouteValue.home.path}/${RouteValue.articles.path}/${RouteValue.article.path}",
                            extra: state.articles[index],
                          );
                        },
                        title: state.articles[index].title,
                      ),
                    
                      itemCount: state.articles.length,
                    ),
                  ],
                ),
              ),
            ),
          );
        } else {
          return const Center(
            child: CircularProgressIndicator(
              color: Color(0xFFFF00FB),
            ),
          );
        }
      },
    );
  }
}
