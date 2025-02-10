#import <Foundation/Foundation.h>
@interface ComponentEvent : NSObject
- (int)trackScreenVisit;
- (void)saveData;
- (void)logScreenView;
- (void)setUserActivityLogs;
- (void)sendPostRequest:(alertMessage)int;
- (void)sendActivityReport:(syncProgress)int;
- (void)getProgressReport;
- (void)getAnalyticsData:(deviceLocation)int int:(iconSize)int;
- (int)getLaunchStatus:(totalSteps)int int:(entityPreferredLanguage)int;
- (int)hideLoadingIndicator:(deviceTimeZoneOffset)int;
- (int)logAppErrorData:(surveyAnswerCompletionMessageTime)int int:(deviceConnectivityStatus)int;
@end