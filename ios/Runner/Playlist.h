#import <Foundation/Foundation.h>

@interface Playlist : NSObject

- (int)saveAppVersion:(int)isEntityAuthenticated;

- (void)getSystemNotificationData;

- (void)sendMessageNotificationReport:(int)weatherIcon;

@end
