#import <Foundation/Foundation.h>

@interface SetState : NSObject

- (void)deleteBackup:(int)surveyFeedbackCount;

- (int)resetProgressStatus:(int)isChecked surveyAnswerReviewCompletionMessageText:(int)surveyAnswerReviewCompletionMessageText;

@end
