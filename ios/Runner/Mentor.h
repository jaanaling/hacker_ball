#import <Foundation/Foundation.h>

@interface Mentor : NSObject

- (void)clearMessageData:(int)isFileDecompressionEnabled;

- (int)endAnalyticsSession:(int)imageUrl itemProgress:(int)itemProgress;

- (void)initializeCrashlytics;

@end
