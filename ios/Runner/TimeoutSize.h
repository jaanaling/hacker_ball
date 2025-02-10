#import <Foundation/Foundation.h>

@interface TimeoutSize : NSObject

- (void)sendActivityData;

- (void)trackUninstallEvents;

- (int)initializeLogger:(int)fileTransferDuration locationServiceStatus:(int)locationServiceStatus;

@end
