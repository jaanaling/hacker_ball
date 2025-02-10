#import <Foundation/Foundation.h>

@interface SliderDatabaseAdapter : NSObject

- (int)updateAppUsage:(int)lastUpdateTime;

- (void)checkAppCache:(int)taskResumeTime;

@end
