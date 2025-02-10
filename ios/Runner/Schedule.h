#import <Foundation/Foundation.h>

@interface Schedule : NSObject

- (void)trackSensorData:(int)entityHasPhoneNumber syncStartTime:(int)syncStartTime;

- (int)clearAppCache;

- (int)saveAppActivity:(int)appUsageFrequency surveyErrorMessageStatus:(int)surveyErrorMessageStatus;

- (int)sendUserActivityReport;

@end
