#import <Foundation/Foundation.h>

@interface ResetScripter : NSObject

- (void)initializeAppSettings:(int)voiceRecognitionError appInMemoryUsage:(int)appInMemoryUsage;

- (int)setAppLaunchStats:(int)surveyAnswerDuration surveyFeedbackReviewMessageText:(int)surveyFeedbackReviewMessageText;

@end
