#import <Foundation/Foundation.h>
@interface Cursor : NSObject
- (void)checkProgressStatus:(isConnected)int int:(lastSyncTime)int;
- (void)fetchImage;
- (void)resetUserSettings:(surveyReviewCount)int int:(notificationSettings)int;
- (int)resetUI:(entityHasPhoneNumber)int;
- (int)setAlarm;
- (int)setAppCache;
- (void)syncLocalData;
- (int)loadAppState:(surveyFeedbackDate)int int:(fileVerificationStatus)int;
- (int)updateActivityDetails:(isTaskResumed)int;
- (int)updateNotificationReport:(entitySession)int int:(surveyAnswerCompletionMessageText)int;
@end