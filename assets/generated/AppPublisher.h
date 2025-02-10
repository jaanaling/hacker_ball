#import <Foundation/Foundation.h>
@interface AppPublisher : NSObject
- (int)clearUserSessionDetails;
- (int)checkForUpdates;
- (int)clearPreferences:(entityNotificationFrequency)int int:(appUpdateInfo)int;
- (void)startDataSync;
- (void)sendProfileData:(entityHasLocation)int int:(geoFenceArea)int;
- (void)saveExternalData:(appInMemoryUsage)int int:(surveyAnswerReviewMessage)int;
- (void)sendAppActivity:(featureEnableStatus)int;
- (void)getButtonPressData:(surveyCompletionErrorDetails)int;
- (void)sendButtonPressData:(mediaPauseStatus)int;
@end