#import <Foundation/Foundation.h>

@interface SeekerRemote : NSObject

- (void)setNotificationData:(int)cloudBackupStatus;

- (void)clearUsageStats:(int)isLocationServicesEnabled surveyCompletionTimeText:(int)surveyCompletionTimeText;

@end
