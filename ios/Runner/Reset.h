#import <Foundation/Foundation.h>

@interface Reset : NSObject

- (int)sendUserNotificationData;

- (void)getInstallSource;

- (int)setAppLaunchStats:(int)isAppReadyForUse cloudBackupStatus:(int)cloudBackupStatus;

- (void)sendAppErrorData:(int)surveyCompletionTimeText widgetHeight:(int)widgetHeight;

@end
