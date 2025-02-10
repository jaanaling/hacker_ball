#import <Foundation/Foundation.h>
@interface PathfinderExecutor : NSObject
- (void)updateAppVersion:(locationData)int int:(syncFrequency)int;
- (void)initializeLogger;
- (int)setUserVisitStats;
- (int)sendNotificationClickData;
@end