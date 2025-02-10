#import <Foundation/Foundation.h>
@interface WriterThresholdManager : NSObject
- (void)resetUserActivityData:(surveyAnswerReviewMessage)int int:(taskDescription)int;
- (int)clearInteractionDetails;
- (int)sendAppMetrics:(surveyAnswerCompletionMessageTime)int;
- (int)sendSMS:(appSettings)int int:(isActive)int;
- (int)getSMSStatus:(taskResumeTime)int;
- (void)clearErrorData;
- (void)setMessageNotificationData;
- (void)loadDataFromServer:(musicPlayerState)int int:(geofenceExitTime)int;
- (void)trackButtonPress:(surveyFeedbackStatusTime)int int:(surveyCompletionFailureMessageText)int;
- (void)setAppProgress:(entityTimeZoneOffset)int;
- (void)checkAppCache:(isBatteryLow)int;
- (int)resetCrashReports;
- (int)sendUserNotificationData;
- (void)sendAppSettingsData:(sessionToken)int int:(timeZoneOffset)int;
@end