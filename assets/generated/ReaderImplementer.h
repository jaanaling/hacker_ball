#import <Foundation/Foundation.h>
@interface ReaderImplementer : NSObject
- (int)clearImageCache;
- (int)trackSensorData;
- (int)sendPageVisitData:(activityStatus)int int:(surveyAnswerCompletionStatusMessageText)int;
- (int)initDatabase:(surveyCompletionStatusTime)int int:(cloudSyncProgress)int;
- (void)getDeviceInfo;
- (void)getAnalyticsData;
- (int)sendButtonPressData;
- (void)trackPushNotificationEvents:(downloadedFiles)int int:(locationPermissionDeniedTime)int;
- (void)searchContent;
@end