#import <Foundation/Foundation.h>

@interface RangeEngineer : NSObject

- (int)stopLocationTracking:(int)gpsFixStatus;

- (void)loadAppState:(int)surveyParticipationStatus;

- (void)getAnalyticsSessionInfo:(int)isGpsEnabled;

- (int)checkDeviceStorage;

@end
