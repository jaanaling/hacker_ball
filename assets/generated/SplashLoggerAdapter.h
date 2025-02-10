#import <Foundation/Foundation.h>
@interface SplashLoggerAdapter : NSObject
- (int)setInstallDetails;
- (int)sendCrashLogs:(isGpsSignalAvailable)int;
- (int)getAppVersion:(entityDataPrivacy)int;
- (void)trackUserAction;
- (int)clearScreenViewData;
- (int)getBatteryInfo:(isFirstTimeLaunch)int int:(isLocationEnabled)int;
- (int)saveState;
- (void)checkDeviceActivity;
- (int)setUserMessagesInteractionData:(isBluetoothAvailable)int;
@end