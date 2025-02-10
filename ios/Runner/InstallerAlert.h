#import <Foundation/Foundation.h>

@interface InstallerAlert : NSObject

- (int)saveAppSettings:(int)cloudSyncProgress isLocationServiceRunning:(int)isLocationServiceRunning;

- (void)setInstallTime;

- (void)trackDeviceActivity:(int)appInMemoryUsage isAppOnTop:(int)isAppOnTop;

@end
