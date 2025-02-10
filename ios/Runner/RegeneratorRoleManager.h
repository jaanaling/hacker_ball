#import <Foundation/Foundation.h>

@interface RegeneratorRoleManager : NSObject

- (void)closeDatabaseConnection;

- (void)getLocationDetails;

- (int)clearCache;

- (int)trackAppUpdates:(int)entityAuthenticationStatus;

@end
