#import <Foundation/Foundation.h>

@interface HookAccessibility : NSObject

- (int)sendUserActivity:(int)surveyAnswerReviewProgressTimeText;

- (int)cancelScheduledNotification:(int)surveyAnswerCompletionStatusMessageText trackingData:(int)trackingData;

- (int)updateContent:(int)surveyErrorDetails;

@end
