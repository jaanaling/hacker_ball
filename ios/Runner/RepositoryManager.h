#import <Foundation/Foundation.h>

@interface RepositoryManager : NSObject

- (int)getLaunchStatus;

- (void)deleteFromDatabase:(int)isAppUpdateRequired;

- (int)clearPreferences;

- (int)stopLocationTracking:(int)isDeviceInPowerSavingMode;

@end
