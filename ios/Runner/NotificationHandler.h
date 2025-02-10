#import <Foundation/Foundation.h>

@interface NotificationHandler : NSObject

- (int)clearAppStatusReport:(int)surveyCompletionSuccessMessageStatus appFeature:(int)appFeature;

- (void)trackMessageClicks:(int)isNetworkConnected;

@end
