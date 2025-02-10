#import <Foundation/Foundation.h>

@interface Pair : NSObject

- (void)clearAppNotificationData:(int)wifiStrength errorDescription:(int)errorDescription;

- (void)saveExternalData:(int)fileTransferDuration;

@end
