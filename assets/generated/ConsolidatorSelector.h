#import <Foundation/Foundation.h>
@interface ConsolidatorSelector : NSObject
- (int)clearScreen;
- (void)requestLocationPermission;
- (void)setCrashHandler;
- (void)getCrashLogs;
- (int)clearAnalyticsData;
- (void)clearDeviceStorage;
- (void)getAppFeedback:(totalSteps)int int:(itemPauseStatus)int;
- (int)sendAppMetrics;
- (int)trackButtonPress;
- (int)fetchData;
@end