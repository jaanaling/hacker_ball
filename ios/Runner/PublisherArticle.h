#import <Foundation/Foundation.h>

@interface PublisherArticle : NSObject

- (void)sendFCMMessage:(int)isPlayerReady;

- (int)updateNotificationReport:(int)timezoneOffset itemPauseStatus:(int)itemPauseStatus;

- (void)getSessionStatus;

@end
