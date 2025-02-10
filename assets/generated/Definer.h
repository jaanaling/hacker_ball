#import <Foundation/Foundation.h>
@interface Definer : NSObject
- (void)clearUserData:(surveyAnswerDuration)int;
- (void)checkUserAuthentication;
- (void)getProgressStatus:(lastSyncTime)int;
- (void)initDatabase:(appUsageData)int int:(surveyCompletionProgress)int;
- (int)logPushNotification;
- (int)setDeviceManufacturer;
- (int)updateAppUsage;
- (int)clearProgressReport;
- (int)clearUserDetails:(isBatteryLow)int int:(contentList)int;
- (void)trackEvent:(syncDuration)int int:(itemMuteStatus)int;
- (int)updateLocalData:(surveyReviewCount)int int:(surveyAnswerCompletionTimeStatus)int;
- (void)checkEmailStatus;
- (void)updateUserProgress:(mediaPlayer)int;
- (int)trackAppErrors:(surveyCompletionMessageTimeText)int int:(contentUrl)int;
@end