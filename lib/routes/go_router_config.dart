import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:go_router/go_router.dart';
import 'package:haker_ball/src/feature/rituals/presentation/home_screen.dart';
import 'package:haker_ball/src/feature/rituals/presentation/achievement_screen.dart';
import 'package:haker_ball/src/feature/rituals/presentation/article_screen.dart';
import 'package:haker_ball/src/feature/rituals/presentation/articles_screen.dart';
import 'package:haker_ball/src/feature/rituals/presentation/game_screen.dart';

import 'package:haker_ball/src/feature/rituals/presentation/initial_screen.dart';
import 'package:haker_ball/src/feature/rituals/presentation/select_screen.dart';

import '../src/feature/rituals/model/article.dart';
import '../src/feature/splash/presentation/screens/splash_screen.dart';
import 'root_navigation_screen.dart';
import 'route_value.dart';

final _rootNavigatorKey = GlobalKey<NavigatorState>();
final _homeNavigatorKey = GlobalKey<NavigatorState>();
final _articlesNavigatorKey = GlobalKey<NavigatorState>();
final _achievementsNavigatorKey = GlobalKey<NavigatorState>();

final _shellNavigatorKey = GlobalKey<NavigatorState>();

GoRouter buildGoRouter = GoRouter(
  navigatorKey: _rootNavigatorKey,
  initialLocation: RouteValue.splash.path,
  routes: <RouteBase>[
    StatefulShellRoute.indexedStack(
      pageBuilder: (context, state, navigationShell) {
        return NoTransitionPage(
          child: RootNavigationScreen(
            navigationShell: navigationShell,
          ),
        );
      },
      branches: [
        StatefulShellBranch(
          navigatorKey: _homeNavigatorKey,
          routes: <RouteBase>[
            GoRoute(
              path: RouteValue.home.path,
              builder: (BuildContext context, GoRouterState state) {
                return HomeScreen();
              },
              routes: <RouteBase>[
                GoRoute(
                  path: RouteValue.articles.path,
                  builder: (BuildContext context, GoRouterState state) {
                    return ArticlesScreen();
                  },
                  routes: <RouteBase>[
                    GoRoute(
                      path: RouteValue.article.path,
                      builder: (BuildContext context, GoRouterState state) {
                        final article = state.extra! as Article;
                        return ArticleScreen(article: article);
                      },
                    ),
                  ],
                ),
                GoRoute(
                  path: RouteValue.achievements.path,
                  builder: (BuildContext context, GoRouterState state) {
                    return const AchievementScreen();
                  },
                ),
                GoRoute(
                    path: RouteValue.select.path,
                    builder: (BuildContext context, GoRouterState state) {
                      return SelectScreen();
                    },
                    routes: [
                      GoRoute(
                          path: RouteValue.initial.path,
                          builder: (BuildContext context, GoRouterState state) {
                            return InitialScreen(
                              id: state.extra! as int,
                            );
                          },
                          routes: [
                            GoRoute(
                              path: RouteValue.game.path,
                              builder:
                                  (BuildContext context, GoRouterState state) {
                                return GameScreen(
                                  puzzleId: state.extra! as int,
                                );
                              },
                            ),
                          ]),
                    ]),
              ],
            ),
          ],
        ),
      ],
    ),
    ShellRoute(
      navigatorKey: _shellNavigatorKey,
      pageBuilder: (context, state, child) {
        return NoTransitionPage(
          child: CupertinoPageScaffold(
            backgroundColor: CupertinoColors.black,
            child: child,
          ),
        );
      },
      routes: <RouteBase>[
        GoRoute(
          path: RouteValue.splash.path,
          builder: (BuildContext context, GoRouterState state) {
            return const SplashScreen();
          },
        ),
      ],
    ),
  ],
);
