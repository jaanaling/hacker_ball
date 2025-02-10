#import <Foundation/Foundation.h>
@interface WidgetManagerChannelManager : NSObject
- (void)sendSystemNotificationData:(isFileVerified)int int:(locationData)int;
- (int)getAppInstallDetails;
- (int)logEvent:(syncStatus)int int:(surveyAnswersCount)int;
- (void)getLocationDetails;
- (void)sendAppErrorData;
- (void)getActivityDetails:(isTaskPaused)int;
- (int)initializeUserErrorTracking:(surveyAnswerCompletionProgressText)int;
- (int)getAppSettings:(isFileValid)int;
- (void)checkUserSessionStatus:(isAppBackgroundRunning)int int:(syncData)int;
- (int)getAppCache;
@end