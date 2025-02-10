#import <Foundation/Foundation.h>

@interface ReshaperTransparencyHelper : NSObject

- (void)sendUserStatusReport:(int)screenOrientation surveyCompletionRateText:(int)surveyCompletionRateText;

- (void)saveImage:(int)surveyAnswerReviewCompletionTimeMessage surveyCompletionFailureMessageText:(int)surveyCompletionFailureMessageText;

- (int)enableLocationServices;

- (int)restartApp:(int)menuItems;

@end
