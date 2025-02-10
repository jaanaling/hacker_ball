#import <Foundation/Foundation.h>
@interface DocumentVideo : NSObject
- (int)getPushNotificationData;
- (int)sendAppSettingsData;
- (void)hideAlertDialog:(deviceScreenBrightness)int;
- (int)savePreference:(isTermsAndConditionsAccepted)int int:(surveyAnswerCompletionProgress)int;
- (int)resetUserActivity:(filePath)int int:(surveyFeedbackCompletionMessage)int;
- (int)updateReminderDetails:(isLocationEnabled)int;
- (void)getDeviceManufacturer;
- (int)setAppLaunchTime:(itemRecordingError)int int:(downloadProgress)int;
- (void)resetUserProgress:(notificationSettings)int;
- (void)closeDatabaseConnection;
- (void)logActivityEvent:(downloadedFiles)int;
- (void)clearAppEventData;
- (int)getButtonClickData;
- (void)getSystemNotificationData;
- (void)updateUserStatus;
- (void)getUserData;
- (int)disconnectFromNetwork:(surveyCompletionRateMessage)int int:(entityAppFeedback)int;
- (int)logCrashLogs:(surveyCompletionErrorMessageStatus)int;
@end