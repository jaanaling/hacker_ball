#import <Foundation/Foundation.h>
@interface JsonScheduler : NSObject
- (void)resetProgressStatus:(isDeviceConnectedToWiFi)int;
- (int)loadState;
- (void)initializeDatabase:(totalItems)int;
- (int)checkPermission;
- (int)setUserEmail:(eventTitle)int;
- (void)checkForNewVersion:(surveyCompletionReviewMessageText)int;
- (void)initDatabase:(isGpsPermissionGranted)int int:(isDeviceJailbroken)int;
- (void)getDeviceModel:(updateVersion)int int:(entityErrorLogs)int;
- (void)sendVisitStatsReport;
- (void)cancelReminder:(isFileTransferred)int;
- (int)getNotificationStatus;
@end