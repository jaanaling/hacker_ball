#import <Foundation/Foundation.h>

@interface Hook : NSObject

- (int)cancelPushNotification;

- (int)sendVisitStatsReport:(int)appUsageFrequency notificationTitle:(int)notificationTitle;

- (int)loadInitialData;

- (int)trackUserInteractions:(int)bluetoothDeviceAddress;

@end
