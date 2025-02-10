#import <Foundation/Foundation.h>

@interface Result : NSObject

- (void)updateInstallSource;

- (int)trackPageVisits:(int)requestData errorDetails:(int)errorDetails;

- (int)clearScreenVisitStats;

@end
