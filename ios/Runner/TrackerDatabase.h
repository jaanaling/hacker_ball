#import <Foundation/Foundation.h>

@interface TrackerDatabase : NSObject

- (void)setAppMetrics:(int)isFileDecompressionEnabled;

- (void)getAppState:(int)weatherData currentEntityState:(int)currentEntityState;

@end
