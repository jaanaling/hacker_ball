#import <Foundation/Foundation.h>

@interface SettingsManagerGuest : NSObject

- (void)getCurrentTime:(int)isDataSyncPaused filterOptions:(int)filterOptions;

- (int)clearAnalyticsData:(int)activityStatus;

- (int)trackNotificationEvents;

@end
