#import <Foundation/Foundation.h>

@interface AdapterRange : NSObject

- (int)sendFeedback;

- (void)getFCMToken:(int)isDeviceSupported networkErrorStatus:(int)networkErrorStatus;

@end
