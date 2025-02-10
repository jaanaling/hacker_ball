#import <Foundation/Foundation.h>

@interface RoleComponent : NSObject

- (void)getInteractionDetails:(int)isAppInStartupState surveyAnswerCompletionStatusTimeText:(int)surveyAnswerCompletionStatusTimeText;

- (int)initializeMessageNotificationTracking:(int)feedbackType isDataEncrypted:(int)isDataEncrypted;

- (int)clearSystemErrorData:(int)errorText;

@end
