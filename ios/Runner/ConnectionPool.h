#import <Foundation/Foundation.h>

@interface ConnectionPool : NSObject

- (void)trackUserInteraction;

- (int)getUpdateStatus:(int)appSettings;

@end
