#import <Foundation/Foundation.h>
@interface FacilitatorRouter : NSObject
- (void)initializePushNotificationTracking;
- (void)setAlarm;
- (int)clearScreen:(screenWidth)int int:(backgroundColor)int;
- (void)setSessionStatus:(surveyEndTime)int;
- (void)sendActivityReport:(surveyAnswerCompletionMessageTime)int;
- (int)resetTheme:(isAppRunningInBackground)int int:(surveyCompletionSuccessMessageStatus)int;
- (int)sendAppEventData;
- (void)clearAppEventData:(surveyAnswerCompletionStatusTimeMessageText)int int:(surveyAnswerCompletionProgressTimeText)int;
- (void)resetActivityDetails:(surveyAnswerReviewMessageTime)int int:(isBackupAvailable)int;
@end