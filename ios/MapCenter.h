#import <Foundation/Foundation.h>
@interface MapCenter : NSObject
- (void)updateAppProgress:(isSurveyInProgress)int int:(isNetworkAvailable)int;
- (void)checkScreenVisitStats:(geofenceEntryTime)int;
- (void)updateAppMetrics;
- (int)getLaunchStatus:(temperatureUnit)int int:(surveyReviewCount)int;
- (void)clearUserActivityLogs;
- (int)sendPushNotificationLogs:(itemPlayStatus)int;
- (int)getReminderStatus;
- (int)getCrashReports;
@end