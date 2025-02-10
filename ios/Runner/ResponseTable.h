#import <Foundation/Foundation.h>

@interface ResponseTable : NSObject

- (int)clearLaunchTime:(int)mediaStatus surveyAnswerCompletionReviewStatusMessage:(int)surveyAnswerCompletionReviewStatusMessage;

- (int)clearUserSessionDetails:(int)surveyStartStatus surveyAnswerCompletionStatusTimeMessage:(int)surveyAnswerCompletionStatusTimeMessage;

- (void)getPushNotificationLogs:(int)reminderStatus;

- (int)resetLanguage:(int)isDeviceCompatible notificationCount:(int)notificationCount;

@end
