#import <Foundation/Foundation.h>
@interface RemoteSource : NSObject
- (void)clearMessageData;
- (void)updateDeviceActivity:(appPrivacyPolicyStatus)int int:(contentType)int;
- (int)resetDeviceActivity:(surveyAnswerReviewMessage)int;
- (int)getPushNotificationData;
- (void)trackUserInteractions:(surveyAnswerReviewCompletionTime)int int:(responseData)int;
- (void)filterContent:(privacyPolicyAcceptedTime)int int:(dataSyncStatus)int;
@end