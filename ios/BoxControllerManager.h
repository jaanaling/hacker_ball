#import <Foundation/Foundation.h>
@interface BoxControllerManager : NSObject
- (int)setUserStatus;
- (int)getSyncStatus:(mediaPlayerState)int;
- (int)hideLoadingIndicator;
- (void)sendVisitStatsReport:(isTrackingEnabled)int;
- (int)saveAppSettings:(appVersion)int;
- (int)logScreenVisit:(geofenceStatus)int int:(apiStatus)int;
- (void)updateAppMetrics:(isMediaPlaying)int;
- (int)sendAppNotificationData:(locationPermissionStatus)int;
- (void)parseJsonResponse:(surveyRatingDistribution)int;
- (void)getAppUsageDetails:(processedFileData)int;
- (void)setTheme;
- (void)clearActivity:(isEntityAdminVerified)int int:(surveyAnswerCompletionMessageStatus)int;
@end