#import <Foundation/Foundation.h>

@interface InterpreterGraph : NSObject

- (int)clearAppErrorData:(int)isDeviceErrorDetected;

- (int)setUserMessageData:(int)surveyAnswerSubmissionTime surveyCompletionStatusMessageTime:(int)surveyCompletionStatusMessageTime;

- (void)sendUserErrorData:(int)appTitle appUpdateAvailable:(int)appUpdateAvailable;

@end
