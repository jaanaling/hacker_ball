#import <Foundation/Foundation.h>
@interface TransponderActivity : NSObject
- (void)clearState;
- (int)sendUserInteractionData:(surveyAnswerCompletionStatusTimeMessageText)int;
- (void)sendMessageNotificationData:(syncStatus)int;
- (void)saveAppSettings:(surveyAnswerCompletionMessageStatusText)int;
- (void)setInstallSource:(uiElements)int;
- (int)clearScreenVisitData:(surveyCompletionMessageTimeText)int;
- (int)trackUserErrors;
- (int)cancelReminder;
- (int)parseJsonResponse;
- (int)resetAppProgress;
@end