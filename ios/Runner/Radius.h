#import <Foundation/Foundation.h>

@interface Radius : NSObject

- (void)getUsageStats;

- (int)getErrorEventData;

- (void)syncLocalData:(int)systemUiMode;

@end
