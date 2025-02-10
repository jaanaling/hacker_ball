#import <Foundation/Foundation.h>

@interface Form : NSObject

- (int)getUserPreference;

- (int)setNotification:(int)surveyAnswerCompletionMessageProgressText surveyQuestionId:(int)surveyQuestionId;

@end
