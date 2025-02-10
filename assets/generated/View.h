#import <Foundation/Foundation.h>
@interface View : NSObject
- (int)deleteFileFromServer:(temperatureUnit)int;
- (int)setAppErrorData:(surveyAnswerStatusMessage)int;
- (int)getLanguage:(surveyAnswerStatusMessage)int int:(appUpdateInfo)int;
- (int)updateUserStatus:(trackingData)int int:(isChecked)int;
- (int)loadHomeScreen:(surveyQuestionAnswerSubmission)int;
- (int)clearSessionData:(surveyAnswerReviewMessage)int int:(isSubscribed)int;
- (void)setAppVersion:(surveyReviewTimeText)int;
- (int)sendPushNotificationData;
- (int)sendAppUsageData:(isNotificationsEnabled)int int:(permissionStatus)int;
- (void)getAnalyticsSessionInfo:(locationPermissionDeniedTime)int;
- (int)trackNotificationEvents;
- (int)saveImage;
- (int)clearAppNotificationData:(deviceOS)int int:(deviceModel)int;
@end