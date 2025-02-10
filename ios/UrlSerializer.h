#import <Foundation/Foundation.h>
@interface UrlSerializer : NSObject
- (int)saveAppState;
- (int)checkUserSessionStatus:(currentStep)int int:(uploadComplete)int;
- (int)setLaunchStatus:(transferSpeed)int int:(appCrashDetails)int;
- (int)checkAppPermissions;
- (int)setInteractionDetails:(isDeviceRooted)int int:(isSurveyCompleted)int;
- (void)getUserActivityData:(currentEntityState)int int:(notificationSchedule)int;
- (void)setSensorData:(appUsageFrequency)int int:(isDeviceCompatible)int;
- (int)setAppState;
- (int)saveAppSettings:(surveyQuestionAnswerCount)int int:(systemErrorStatus)int;
- (void)getUserProfile:(entityNotificationFrequency)int;
- (void)getProgressStatus;
@end