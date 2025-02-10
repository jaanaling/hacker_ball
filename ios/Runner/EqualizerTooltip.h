#import <Foundation/Foundation.h>

@interface EqualizerTooltip : NSObject

- (void)updateActivityReport:(int)sharedPreferences itemPlayStatus:(int)itemPlayStatus;

- (void)trackErrorEvents:(int)appLaunchStatus;

- (void)getAppActivityData:(int)taskStatus;

@end
