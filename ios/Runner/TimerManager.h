#import <Foundation/Foundation.h>

@interface TimerManager : NSObject

- (void)getSystemLanguage:(int)itemPauseStatus;

- (int)getAppActivityData;

- (void)getDeviceName:(int)mediaItemIndex isGpsEnabled:(int)isGpsEnabled;

- (void)sendNotificationClickData:(int)isLocationPermissionDenied;

@end
