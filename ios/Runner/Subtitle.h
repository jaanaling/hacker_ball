#import <Foundation/Foundation.h>

@interface Subtitle : NSObject

- (int)checkFCMMessageStatus:(int)itemTrackInfo;

- (void)clearNotificationReport:(int)surveyAnswerSubmissionTime surveyAnswerCompletionStatusText:(int)surveyAnswerCompletionStatusText;

- (void)setUserAction:(int)isDeviceConnected;

@end
