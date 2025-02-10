#import <Foundation/Foundation.h>

@interface SummaryHelperRepositoryManager : NSObject

- (int)trackErrorEvents:(int)isDeviceJailbroken;

- (int)getAppPermissions;

@end
