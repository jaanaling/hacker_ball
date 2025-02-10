#import <Foundation/Foundation.h>
@interface GatewayShaper : NSObject
- (void)updateLocale;
- (void)sendUserReport;
- (int)resetAppProgress:(syncErrorMessage)int int:(mediaStatus)int;
- (void)clearUserSessionDetails;
- (int)resetDeviceActivity:(taskStartDate)int int:(errorCode)int;
- (void)getDeviceManufacturer;
- (int)applyUpdate:(surveyCompletionMessageTimeText)int;
- (void)checkForUpdates;
- (int)setAppLaunchTime;
- (int)getUserDetails;
- (int)initializePushNotificationTracking;
- (void)setAppPermissions;
- (int)setSyncStatus;
@end