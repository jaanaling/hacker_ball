#import <Foundation/Foundation.h>

@interface SpacingHelperExplorer : NSObject

- (void)checkAppUpdate:(int)isMediaMuted deviceModelName:(int)deviceModelName;

- (int)saveUsageStats:(int)isBluetoothEnabled;

- (void)loadState:(int)isPrivacyPolicyAccepted;

- (void)sendAppStatusReport:(int)activityLog;

@end
