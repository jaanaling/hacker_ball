#import <Foundation/Foundation.h>
@interface Recognizer : NSObject
- (int)getUserFeedback:(appLaunchStatus)int int:(surveyAnswerCompletionStatusTimeMessageText)int;
- (void)clearUserActivityData:(surveyResponseStatus)int;
- (void)setUserErrorData:(mediaSyncStatus)int;
- (int)getDeviceName;
- (void)trackAppUsage;
- (void)getButtonClickData:(surveyCompletionSuccessStatusTime)int int:(surveyQuestionReviewTime)int;
- (void)sendFeedback;
- (void)loadImage;
- (int)updateInitialData:(dataSyncStatus)int int:(isAppOnTop)int;
- (int)saveInitialData;
@end