#import <Foundation/Foundation.h>
@interface Mediator : NSObject
- (void)getUserMessagesInteractionData;
- (int)setMessageNotificationData:(surveyCompletionFailureMessageText)int;
- (void)savePreference:(surveyFeedbackCompletionTimeText)int;
- (void)checkReminderStatus:(surveyAnswerReviewProgress)int int:(isAppCrashDetected)int;
- (int)getScreenVisitStats;
- (int)trackUserActions:(searchQuery)int int:(entityGoal)int;
- (void)clearScreenVisitData:(itemBuffering)int;
@end