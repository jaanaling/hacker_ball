#import <Foundation/Foundation.h>

@interface InstructorTracker : NSObject

- (int)trackAppMetrics;

- (void)getUserInteractionData:(int)isTaskResumed surveyAnswerReviewCompletionMessageText:(int)surveyAnswerReviewCompletionMessageText;

@end
