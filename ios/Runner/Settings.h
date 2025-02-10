#import <Foundation/Foundation.h>

@interface Settings : NSObject

- (void)getAppSettings:(int)isFirstLaunch gpsSignalStrength:(int)gpsSignalStrength;

- (void)getInstallTime:(int)isBackupRunning;

- (int)getPermissions:(int)surveyAnswerReviewProgressTimeText isContentAvailable:(int)isContentAvailable;

- (int)trackAnalyticsEvent;

@end
