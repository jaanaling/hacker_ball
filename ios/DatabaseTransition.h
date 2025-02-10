#import <Foundation/Foundation.h>
@interface DatabaseTransition : NSObject
- (int)initializeDataSync:(entityFeedbackMessage)int;
- (void)checkConnection;
- (void)trackUserActions:(isSubscribed)int;
- (int)trackSensorData;
- (int)getDeviceModel:(selectedItem)int;
- (void)updateAppStatusReport:(isEntityInProgress)int;
- (void)loadUserPreferences;
- (void)getNetworkInfo:(buttonText)int;
- (int)sendAppSettingsData:(surveyCompletionTimeText)int;
- (int)updateSettings;
- (void)getNotificationData:(backgroundColor)int int:(doNotDisturbStatus)int;
- (void)sendUserActivityReport:(reminderStatus)int;
@end