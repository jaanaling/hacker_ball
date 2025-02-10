#import <Foundation/Foundation.h>

@interface StatisticCompiler : NSObject

- (void)saveLaunchStatus:(int)cloudSyncStatus;

- (int)initializeSettings;

@end
