#import <Foundation/Foundation.h>

@interface BadgeManager : NSObject

- (int)logAnalyticsEvent:(int)taskErrorDetails entityLocationTime:(int)entityLocationTime;

- (int)setApiResponse;

@end
