import 'package:core_logic/core_logic.dart';
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
              pageBuilder: (context, state) {
                return NoTransitionPage(child: HomeScreen());
              },
              routes: <RouteBase>[
                GoRoute(
                  path: RouteValue.articles.path,
                  pageBuilder: (context, state) {
                    return NoTransitionPage(child: ArticlesScreen());
                  },
                  routes: <RouteBase>[
                    GoRoute(
                      path: RouteValue.article.path,
                      pageBuilder: (BuildContext context, GoRouterState state) {
                        final article = state.extra! as Article;
                        return NoTransitionPage(child: ArticleScreen(article: article));
                      },
                    ),
                  ],
                ),
                GoRoute(
                  path: RouteValue.achievements.path,
                  pageBuilder: (BuildContext context, GoRouterState state) {
                    return NoTransitionPage(child: AchievementScreen());
                  },
                ),
                GoRoute(
                    path: RouteValue.select.path,
                    pageBuilder: (BuildContext context, GoRouterState state) {
                      return NoTransitionPage(child: SelectScreen());
                    },
                    routes: [
                      GoRoute(
                          path: RouteValue.initial.path,
                          pageBuilder: (BuildContext context, GoRouterState state) {
                            return NoTransitionPage(
                              child: InitialScreen(
                                id: state.extra! as int,
                              ),
                            );
                          },
                          routes: [
                            GoRoute(
                              path: RouteValue.game.path,
                              pageBuilder:
                                  (BuildContext context, GoRouterState state) {
                                return NoTransitionPage(
                                  child: GameScreen(
                                    puzzleId: state.extra! as int,
                                  ),
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
    GoRoute(
      parentNavigatorKey: _rootNavigatorKey,
      path: '/core',
      pageBuilder: (context, state) {
        return NoTransitionPage(
          child: CoreScreen(
            key: UniqueKey(),
          ),
        );
      },
    ),
  ],
);
