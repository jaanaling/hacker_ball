#import <Foundation/Foundation.h>
@interface Spinner : NSObject
- (void)getUserSessionDetails;
- (int)trackAppError:(dataPrivacyStatus)int;
- (int)updateProgressStatus:(surveyCompletionNotificationStatus)int int:(appUpdateInfo)int;
- (int)getUserVisitStats;
- (int)signInUser:(selectedLanguageCode)int;
- (int)showSnackBar:(applicationState)int;
- (int)clearUserErrorData;
- (void)clearSyncData:(isAppRunning)int int:(surveyAnswerCompletionMessageText)int;
- (int)setAppPermissions:(fileSyncStatus)int int:(privacyPolicyAcceptedTime)int;
- (void)sendUpdateData:(cloudSyncStatus)int;
- (void)trackUserActions:(deviceOS)int;
@end