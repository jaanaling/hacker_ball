#import <Foundation/Foundation.h>

@interface EqualizerCursor : NSObject

- (void)updateUserReport:(int)surveyCompletionMessageTimeStatus;

- (void)logAppInfo:(int)isAvailable isMusicPlaying:(int)isMusicPlaying;

- (void)updateLocation:(int)isLocationServiceRunning bluetoothConnectionStatus:(int)bluetoothConnectionStatus;

- (void)getUpdateStatus:(int)batteryPercentage;

@end
