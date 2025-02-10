#import <Foundation/Foundation.h>

@interface PositionContextFactory : NSObject

- (void)trackInstallEvents:(int)isFeedbackAvailable;

- (int)sendPushNotification;

- (int)getLocationPermissionStatus:(int)isLocationUpdated;

- (int)initializeDatabase;

@end
