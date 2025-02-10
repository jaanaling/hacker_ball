#import <Foundation/Foundation.h>

@interface FlagManager : NSObject

- (int)setUserErrorData:(int)appLaunchStatus timezoneOffset:(int)timezoneOffset;

- (void)sendAppFeedback:(int)surveyAnswerCompletionReviewTimeStatusText surveyCommentsCount:(int)surveyCommentsCount;

- (void)clearUserActivityLogs:(int)isMediaLoaded emailVerified:(int)emailVerified;

- (int)updateUserSettings;

@end
