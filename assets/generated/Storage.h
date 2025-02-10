#import <Foundation/Foundation.h>
@interface Storage : NSObject
- (void)clearUserInteractionData:(surveyCompletionStatusMessageProgress)int int:(isAppUpdateRequired)int;
- (int)updateAppReport;
- (int)clearUserActivityData;
- (void)updateNetworkStatus:(appUpdateInfo)int int:(appUsageFrequency)int;
- (int)updateContent:(gpsLocationTime)int;
- (int)trackMessageNotificationEvents:(appDownloadStatus)int int:(isLocationPermissionGranted)int;
- (int)stopLocationTracking;
- (int)resumeApp;
- (int)checkNetworkConnection:(isFileCorrupted)int int:(appLaunchCount)int;
- (void)trackUserAction:(bluetoothDeviceName)int int:(appCurrentVersion)int;
- (int)resetDatabase:(surveyErrorMessageStatus)int int:(surveyAnswersCount)int;
- (void)sendHttpRequest:(gpsLocationTime)int;
@end