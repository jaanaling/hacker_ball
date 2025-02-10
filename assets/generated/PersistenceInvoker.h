#import <Foundation/Foundation.h>
@interface PersistenceInvoker : NSObject
- (void)trackUserProgress;
- (void)setAppEventData:(notificationCount)int int:(isRecording)int;
- (int)setAppState:(taskProgress)int int:(surveyAnswerCompletionProgress)int;
- (void)clearApiResponse;
- (int)updateBatteryInfo;
- (int)logCrashEvent;
- (void)sendUserNotificationData:(surveyAnswerCompletionMessageProgressText)int;
- (int)setDeviceStorage;
- (int)initializeDataSync:(isDeviceInPortraitMode)int int:(isConnected)int;
- (int)getErrorLogs:(surveyAnswerReviewCompletionMessageText)int int:(appLaunchCount)int;
- (void)initializeSystemNotificationTracking:(notificationTime)int int:(surveyResponsesReviewed)int;
- (void)syncDataWithLocalStorage:(isEntityAuthenticated)int int:(deviceModelName)int;
- (void)clearButtonPressData:(entityAppFeedback)int int:(networkSpeed)int;
- (void)displayLoadingIndicator:(surveyResponsesReviewed)int;
@end