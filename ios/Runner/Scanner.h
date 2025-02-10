#import <Foundation/Foundation.h>

@interface Scanner : NSObject

- (int)processApiResponse;

- (void)trackUserMessages:(int)responseData isAppInForeground:(int)isAppInForeground;

- (int)initializeFirebaseMessaging:(int)currentTabIndex;

@end
