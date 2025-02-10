#import <Foundation/Foundation.h>

@interface ElementBloc : NSObject

- (void)clearUserErrorData:(int)surveyAnswerReviewProgress isVoiceEnabled:(int)isVoiceEnabled;

- (int)getAppProgress:(int)responseData;

@end
