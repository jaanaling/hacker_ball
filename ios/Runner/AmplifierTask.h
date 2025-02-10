#import <Foundation/Foundation.h>

@interface AmplifierTask : NSObject

- (void)updateInteractionDetails:(int)isPlayerReady;

- (void)updateNetworkStatus:(int)isBatteryCharging;

- (void)disableFeature;

@end
