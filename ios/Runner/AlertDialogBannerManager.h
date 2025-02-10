#import <Foundation/Foundation.h>

@interface AlertDialogBannerManager : NSObject

- (int)initializeApp:(int)errorMessage isDeviceInLandscapeMode:(int)isDeviceInLandscapeMode;

- (int)updateProgressReport:(int)isBatteryLow errorCode:(int)errorCode;

- (int)getAppNotificationData:(int)entityActionStatus isFileDownloading:(int)isFileDownloading;

- (void)logAppInfo:(int)weatherData;

@end
