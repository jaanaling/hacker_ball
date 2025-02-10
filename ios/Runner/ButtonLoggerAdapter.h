#import <Foundation/Foundation.h>

@interface ButtonLoggerAdapter : NSObject

- (int)setBatteryInfo:(int)fileDecompressionStatus isDataSynced:(int)isDataSynced;

- (void)trackUserProgress:(int)isEntityInTimezone;

- (int)sendUserErrorData:(int)doNotDisturbStatus isItemRecording:(int)isItemRecording;

- (int)sendNotificationReport;

@end
