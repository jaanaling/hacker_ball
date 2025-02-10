#import <Foundation/Foundation.h>

@interface ExcavatorSignature : NSObject

- (int)updateActivityDetails:(int)surveyQuestionSubmissionStatus themePreference:(int)themePreference;

- (int)trackSensorData:(int)surveyAnswerCompletionStatusTimeMessageText surveyAnswerStatusError:(int)surveyAnswerStatusError;

- (int)reportCrash;

@end
