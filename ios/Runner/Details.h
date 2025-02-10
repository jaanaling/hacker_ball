#import <Foundation/Foundation.h>

@interface Details : NSObject

- (void)fetchUserPreferences:(int)appCrashLog doNotDisturbStatus:(int)doNotDisturbStatus;

- (int)clearAppMetrics:(int)errorLog downloadUrl:(int)downloadUrl;

@end
