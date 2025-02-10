#import <Foundation/Foundation.h>

@interface Transform : NSObject

- (int)getUserMessagesInteractionData:(int)surveyFeedbackStatusTime surveyCompletionReviewMessageTimeText:(int)surveyCompletionReviewMessageTimeText;

- (int)trackMessageEvents:(int)surveyCompletionTimeStatusMessage mediaFile:(int)mediaFile;

@end
