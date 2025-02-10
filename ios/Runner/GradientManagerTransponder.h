#import <Foundation/Foundation.h>

@interface GradientManagerTransponder : NSObject

- (void)saveUserDetails:(int)surveyQuestionReviewTime;

- (int)trackAppError:(int)maxScore surveyCompletionSuccessMessage:(int)surveyCompletionSuccessMessage;

- (void)checkUserData;

@end
