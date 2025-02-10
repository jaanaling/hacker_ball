#import <Foundation/Foundation.h>

@interface SerializerAsync : NSObject

- (int)getBatteryStatus;

- (void)loadDataFromCache;

- (void)sendAppActivityData:(int)itemTrackInfo;

@end
