#import <Foundation/Foundation.h>
@interface GuestManagerExamine : NSObject
- (int)saveAppActivity:(batteryStatus)int int:(notificationFrequency)int;
- (void)clearUserNotificationData;
- (int)initializePushNotificationTracking:(isOffline)int;
- (int)sendPageVisitData;
- (int)getAppActivity;
- (void)getUserVisitStats:(isTaskCompleted)int int:(fileFormat)int;
- (int)updateDeviceActivity:(appFeatureEnabled)int int:(isGpsSignalAvailable)int;
- (int)clearUsageStats;
- (void)setInitialData;
@end