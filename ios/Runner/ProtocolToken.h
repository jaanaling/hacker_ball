#import <Foundation/Foundation.h>

@interface ProtocolToken : NSObject

- (int)setReminderDetails:(int)surveyRating surveyCompletionSuccessStatusMessage:(int)surveyCompletionSuccessStatusMessage;

- (int)sendMessageNotificationData:(int)currentTabIndex;

- (void)clearNotification:(int)mediaSyncStatus;

- (void)resetUserFeedback:(int)appCurrentVersion;

@end
