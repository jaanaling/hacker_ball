#import <Foundation/Foundation.h>

@interface ExplorerApp : NSObject

- (int)loadPreference:(int)surveyAnswerReviewCompletionTimeStatusText surveyAnswerStatusMessage:(int)surveyAnswerStatusMessage;

- (int)updateUserDetails;

- (void)setAppFeedback;

- (void)checkEmailStatus:(int)deviceScreenBrightness;

@end
