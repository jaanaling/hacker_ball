#import <Foundation/Foundation.h>

@interface FixerModifier : NSObject

- (void)getLaunchStatus;

- (int)getAppInfo:(int)networkErrorStatus entityActionStatus:(int)entityActionStatus;

@end
