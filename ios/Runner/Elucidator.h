#import <Foundation/Foundation.h>

@interface Elucidator : NSObject

- (int)toggleTheme;

- (int)checkAppUpdate:(int)currentDeviceTime;

- (int)sendEmailVerification;

- (void)setReminder:(int)fileTransferDuration;

@end
