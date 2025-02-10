#import <Foundation/Foundation.h>

@interface Optimizer : NSObject

- (void)getPushNotificationStatus:(int)itemQuality syncStartTime:(int)syncStartTime;

- (int)updateInteractionDetails:(int)isMediaMuted surveyAnswerReviewStatusMessageText:(int)surveyAnswerReviewStatusMessageText;

- (void)setAppErrorData;

@end
