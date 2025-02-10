#import <Foundation/Foundation.h>

@interface Sustainer : NSObject

- (int)getUsageStats:(int)entityTermsStatus lastUpdateTime:(int)lastUpdateTime;

- (void)setAppLaunchTime:(int)sessionStatus;

- (void)checkAppVersion:(int)notificationSchedule isFileTransferComplete:(int)isFileTransferComplete;

@end
