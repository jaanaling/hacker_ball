#import <Foundation/Foundation.h>
@interface User : NSObject
- (int)getUserVisitStats:(currentTabIndex)int int:(gpsSignalQuality)int;
- (void)initializeNotificationTracking:(isSyncRequired)int int:(isFileProcessed)int;
- (void)logPageVisit:(entityTaskStatus)int;
- (void)clearPushNotificationData;
- (void)checkAppVersion:(notificationTitle)int;
- (int)setMessageNotificationLogs:(isEntityAuthenticated)int int:(isValidEmail)int;
- (int)updateSettings:(surveyAnswerDetails)int int:(networkErrorStatus)int;
- (void)reportCrash:(surveyAnswerCompletionReviewTimeStatusText)int;
- (void)logActivity;
- (int)checkLocation:(entityTimeZoneOffset)int int:(entityDataStatus)int;
- (int)checkInstallStats:(itemRecordingFilePath)int;
- (int)sendUserMessagesInteractionData;
- (void)initializeDataSync:(isEntityVerified)int int:(imageUrl)int;
- (void)trackMessageNotificationEvents:(timezoneOffset)int;
- (void)trackUserProgress:(notificationHistory)int;
@end