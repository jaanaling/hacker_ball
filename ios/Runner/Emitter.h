#import <Foundation/Foundation.h>

@interface Emitter : NSObject

- (int)enableFeature;

- (int)trackAppEvents:(int)screenOrientation weatherIcon:(int)weatherIcon;

- (int)getNotificationReport:(int)fileTransferStatus apiEndpoint:(int)apiEndpoint;

@end
