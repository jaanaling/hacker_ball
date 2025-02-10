#import <Foundation/Foundation.h>

@interface MapEventDispatcher : NSObject

- (int)getMessageData:(int)appLocale isFileVerificationEnabled:(int)isFileVerificationEnabled;

- (void)clearAppStatusReport:(int)surveyAnswerCompletionTimeMessage;

- (int)getAppErrorData:(int)surveyQuestionResponseTime itemVolumeLevel:(int)itemVolumeLevel;

- (void)clearSystemNotificationData:(int)isCloudAvailable;

@end
