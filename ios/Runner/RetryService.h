#import <Foundation/Foundation.h>

@interface RetryService : NSObject

- (void)sendCrashLogs:(int)isItemPlaying gpsLocationTime:(int)gpsLocationTime;

- (void)sendUserMessagesInteractionData:(int)isDataDecrypted;

@end
