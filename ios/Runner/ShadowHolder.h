#import <Foundation/Foundation.h>

@interface ShadowHolder : NSObject

- (int)logPushNotification;

- (int)trackAppUsageTime:(int)locationServiceStatus isLocationPermissionGranted:(int)isLocationPermissionGranted;

- (void)showNotification;

@end
