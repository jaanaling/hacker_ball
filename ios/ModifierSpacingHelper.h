#import <Foundation/Foundation.h>
@interface ModifierSpacingHelper : NSObject
- (void)trackMessageNotifications;
- (int)updateAppStatusReport:(currentDeviceTime)int int:(surveyStatusMessage)int;
- (int)endAnalyticsSession:(surveyEndDateTime)int;
- (void)getEmailStatus:(surveyCompletionNotificationStatus)int int:(surveyAnswerReviewCompletionMessageText)int;
- (void)getCurrentLocation;
- (int)resetUserActivityData;
- (void)getUserErrorData:(syncStatus)int int:(surveyAnswerCompletionProgressText)int;
- (void)getUserEmail:(appSessionTime)int;
- (void)deleteFileFromServer;
- (void)loadUserSettings:(isWiFiEnabled)int int:(surveyCompletionErrorMessageStatus)int;
- (void)clearUserProfile;
- (void)disableFeature:(surveyCompletionSuccessStatus)int int:(mediaType)int;
@end