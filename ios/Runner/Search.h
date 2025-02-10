#import <Foundation/Foundation.h>

@interface Search : NSObject

- (int)clearUserVisitStats;

- (int)getBatteryStatus:(int)isDeviceConnectedToWiFi systemTimeZone:(int)systemTimeZone;

- (int)logPageVisit;

- (void)saveSessionData:(int)fileStatus;

@end
