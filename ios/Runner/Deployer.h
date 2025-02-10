#import <Foundation/Foundation.h>

@interface Deployer : NSObject

- (void)updateUserFeedback:(int)isEntityInProgress surveyAnswerCompletionMessageTimeText:(int)surveyAnswerCompletionMessageTimeText;

- (void)handleHttpError:(int)deviceBatteryStatus surveyFeedbackGiven:(int)surveyFeedbackGiven;

@end
