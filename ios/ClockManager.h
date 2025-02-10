#import <Foundation/Foundation.h>
@interface ClockManager : NSObject
- (void)sendMessageData:(appUpdateInfo)int int:(isDataSyncPaused)int;
- (int)updateUsageStats:(appLaunchCount)int;
- (void)getAppReport:(currentBalance)int;
- (void)sendTrackingData;
- (int)getUserReport;
- (int)getAppVersion;
- (void)getAppLanguage:(surveyReviewTime)int int:(appFeatureEnabled)int;
@end