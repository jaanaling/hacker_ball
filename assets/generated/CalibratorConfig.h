#import <Foundation/Foundation.h>
@interface CalibratorConfig : NSObject
- (int)recordLaunchTime:(gpsSignalQuality)int;
- (void)setProgressStatus:(itemRecordingFilePath)int int:(appUpdateInfo)int;
- (void)setUserPreference;
- (void)sendHttpRequest:(networkConnectionStatus)int int:(isOfflineMode)int;
- (void)getCrashReports;
@end