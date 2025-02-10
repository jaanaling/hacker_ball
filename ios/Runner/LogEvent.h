#import <Foundation/Foundation.h>

@interface LogEvent : NSObject

- (void)setInteractionDetails:(int)temperatureUnit musicPlaylist:(int)musicPlaylist;

- (int)logAppNotification;

@end
