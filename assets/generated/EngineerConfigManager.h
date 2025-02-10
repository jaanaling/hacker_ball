#import <Foundation/Foundation.h>
@interface EngineerConfigManager : NSObject
- (int)loadUserData:(entityHasProfilePicture)int;
- (void)sendAppActivity:(surveySubmissionStatus)int;
- (void)getLocation:(itemProgress)int;
- (void)loadLanguage:(surveyErrorDetailMessage)int;
- (void)syncDataWithLocalStorage;
- (void)trackLocation;
- (void)processApiResponse:(filePath)int;
- (int)logPushNotification;
- (void)logCrashLogs:(isEntityAdminVerified)int int:(surveyAnswerCompletionTimeText)int;
- (void)getButtonClickData:(isAppSoundEnabled)int;
- (int)handleApiError:(selectedLanguageCode)int;
- (void)logAppNotification;
- (int)setUserNotificationData:(feedbackResponse)int;
- (void)clearLaunchData:(lastSyncTime)int;
- (int)setUserAction:(surveyAnswerCompletionProgress)int;
- (int)resetAppState:(screenWidth)int;
- (void)getSystemErrorData:(themePreference)int;
- (int)updateProgressStatus:(isBatteryLow)int int:(deviceModel)int;
@end