#import <Foundation/Foundation.h>
@interface NoteStreamProcessor : NSObject
- (int)saveDataToDatabase;
- (void)setUserNotificationData:(surveyCompletionErrorMessageStatus)int int:(deviceTimeZoneOffset)int;
- (void)clearAppStatusReport;
- (void)getProgressStatus;
- (void)toggleTheme:(surveyAnswerCompletionProgressText)int;
- (void)setUserLocation;
- (void)setReminderStatus:(surveyStatusMessage)int int:(gpsSignalQuality)int;
- (void)setLaunchStatus:(surveyCompletionReviewMessageTimeText)int;
- (void)clearAppActivityData:(isTaskInProgress)int int:(surveyCompletionMessageProgressStatusText)int;
- (int)getUserActivityData:(appDescription)int;
- (void)sendUserActivityData:(messageList)int int:(sharedPreferences)int;
- (void)getAppInfo;
- (void)sendNotificationData;
- (void)clearSyncData:(surveyAnswerReviewStatusMessageText)int int:(isDataLoaded)int;
- (void)clearProgressReport:(isFirstTimeLaunch)int int:(errorLog)int;
@end