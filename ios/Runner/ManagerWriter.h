#import <Foundation/Foundation.h>

@interface ManagerWriter : NSObject

- (void)resetSensorData:(int)deviceBatteryStatus;

- (int)setAppLaunchStats:(int)isDataEncrypted;

@end
