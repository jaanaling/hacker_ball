#import <Foundation/Foundation.h>

@interface LocalNotification : NSObject

- (void)clearUserSessionDetails;

- (int)sendMessageNotificationReport:(int)locationServiceStatus;

@end
