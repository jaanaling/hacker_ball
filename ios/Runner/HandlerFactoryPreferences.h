#import <Foundation/Foundation.h>

@interface HandlerFactoryPreferences : NSObject

- (void)updateUserFeedback;

- (int)fetchDataFromCache:(int)surveySubmissionStatus;

- (void)getButtonPressData:(int)surveyCompletionMessageTimeText surveyAnswerCompletionReviewStatusMessage:(int)surveyAnswerCompletionReviewStatusMessage;

@end
