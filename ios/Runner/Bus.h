#import <Foundation/Foundation.h>

@interface Bus : NSObject

- (void)sendCrashlyticsData;

- (void)getSystemNotificationData:(int)isItemPlaying notificationFrequency:(int)notificationFrequency;

- (int)setNotificationData:(int)syncStatus;

- (int)checkConnectivity:(int)entityLoginStatus;

@end
