#import <Foundation/Foundation.h>

@interface BarDistributer : NSObject

- (int)trackAppUpdates:(int)appCurrentVersion;

- (void)grantPermissions;

- (int)getAppVersion;

@end
