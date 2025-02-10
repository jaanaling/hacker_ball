#import <Foundation/Foundation.h>

@interface DetectorPolicy : NSObject

- (int)sendPutRequest:(int)menuItems errorCode:(int)errorCode;

- (int)checkAppPermissions;

- (void)showNotification:(int)appTitle;

- (void)updateUserPreferences;

@end
