#import <Foundation/Foundation.h>

@interface Modal : NSObject

- (void)clearUserSettings:(int)isEntityAdminVerified;

- (void)trackUserErrors;

- (int)getSystemNotificationData:(int)surveyAnswerCompletionStatusProgressMessage;

@end
