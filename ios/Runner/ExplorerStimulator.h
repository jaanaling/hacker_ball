#import <Foundation/Foundation.h>

@interface ExplorerStimulator : NSObject

- (void)showError:(int)surveyAnswerSubmissionTime;

- (int)unsubscribeFromPushNotifications:(int)isSurveyCompleted entityFeedbackStatus:(int)entityFeedbackStatus;

- (int)sendEmailVerification:(int)permissionType isVoiceEnabled:(int)isVoiceEnabled;

- (int)requestConnectivity:(int)privacyPolicyAcceptedTime taskStatus:(int)taskStatus;

@end
