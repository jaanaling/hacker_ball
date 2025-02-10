#import <Foundation/Foundation.h>
@interface Shifter : NSObject
- (int)sendDataToServer:(isAppEnabled)int int:(appRatingStatus)int;
- (void)getUserProfile:(isDarkMode)int;
- (void)clearSystemErrorData;
- (void)getCrashReports;
- (int)updateDeviceOrientation:(adminPermissionsStatus)int int:(surveyAnswersCount)int;
- (void)cancelPushNotification:(errorDetails)int int:(surveyQuestionResponseTime)int;
- (void)sendPushNotificationData;
@end