part of 'user_bloc.dart';

sealed class UserEvent extends Equatable {
  const UserEvent();

  @override
  List<Object> get props => [];
}




class UserHintUsed extends UserEvent {
  const UserHintUsed();
}

class UserPuzzleSolved extends UserEvent {
  final bool isCorrect;


  const UserPuzzleSolved({required this.isCorrect, });

  @override
  List<Object> get props => [isCorrect,];
}

class UserAchievementEarned extends UserEvent {
  final int achievementId;

  const UserAchievementEarned(this.achievementId);

  @override
  List<Object> get props => [achievementId];
}
class UserLoadData extends UserEvent {
  const UserLoadData();
}
