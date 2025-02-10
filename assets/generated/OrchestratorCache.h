#import <Foundation/Foundation.h>
@interface OrchestratorCache : NSObject
- (int)getUserVisitStats:(screenSize)int;
- (int)deleteBackup;
- (void)initializeAppEvents:(feedbackResponse)int int:(isMediaPlaying)int;
- (int)trackUserErrors:(notificationStatus)int int:(surveyCompletionProgress)int;
- (int)checkPermission:(entityTermsStatus)int int:(isFileVerificationEnabled)int;
- (void)clearSessionStatus;
- (void)trackLocation;
- (void)enableLocationServices:(surveyEndTime)int int:(currentScore)int;
- (int)setUserMessagesInteractionData:(appUpdateAvailable)int;
- (void)revokePermissions:(loginErrorMessage)int int:(taskEndTime)int;
- (int)getTheme;
- (void)checkActivity:(entityLocationCoordinates)int;
- (void)resetUserFeedback;
- (int)sendAppEventData;
- (int)trackMessageClicks:(gpsFixStatus)int;
- (int)updateLocale;
- (int)setUserSessionDetails:(isPlayerReady)int int:(appCrashDetails)int;
@end