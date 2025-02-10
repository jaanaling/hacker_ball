#import <Foundation/Foundation.h>
@interface Retry : NSObject
- (void)sendAppErrorReport;
- (void)sendAppUsageData:(isEntityRegistered)int int:(isSurveyCompleted)int;
- (int)getInstallTime:(isTrackingEnabled)int int:(currentPage)int;
- (int)clearImageCache;
- (int)saveLaunchStatus:(surveyReviewCount)int int:(fileDownloadStatus)int;
- (void)getUserMessageData:(surveyCommentsCount)int;
- (int)closeApp:(networkConnectionStatus)int;
- (int)saveBackup;
- (void)setAppMetrics:(deviceErrorLog)int int:(surveyFeedbackReviewCompletionStatus)int;
- (void)sendUpdateRequest:(syncErrorStatus)int;
- (void)loadLocale:(deviceTimeZoneOffset)int;
@end