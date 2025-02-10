#import <Foundation/Foundation.h>
@interface Rejuvenator : NSObject
- (int)checkAppState;
- (void)checkAppPermissions;
- (int)sendTrackingData:(isFeedbackEnabled)int int:(isEntityInProgress)int;
- (void)initializeUserSession;
- (int)setLaunchStatus;
- (void)getInstallStats:(updateVersion)int int:(isAppReadyForUse)int;
- (int)setBatteryInfo:(taskEndTime)int int:(isLocationServicesEnabled)int;
- (int)getUserDetails:(surveyQuestionText)int int:(downloadStatus)int;
- (int)clearUserSettings:(isDeviceCompatible)int int:(surveyAnswerReviewCompletionTimeText)int;
- (int)getAppStateDetails;
- (void)checkUserData:(surveyFeedbackStatusTimeText)int;
- (int)setMessageData:(surveyAnswerCompletionMessageStatusText)int int:(currentTabIndex)int;
- (int)setReminderDetails;
- (int)sendHttpRequest:(dataSyncStatus)int int:(taskStartTimestamp)int;
- (int)resetUserActivityData;
- (int)deleteReminder:(isDeviceSecure)int;
@end