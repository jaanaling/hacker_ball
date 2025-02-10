#import <Foundation/Foundation.h>
@interface RegeneratorProgressManager : NSObject
- (void)updateUserFeedback:(surveyQuestionSubmissionStatus)int int:(surveyStatus)int;
- (int)loadState:(isLocationEnabled)int int:(emailVerified)int;
- (void)setPermissions;
- (int)sendAppEventData:(surveyAnswerCompletionReviewStatus)int;
- (int)setUserErrorData:(isAdminAuthenticated)int;
- (void)cancelPushNotification:(isFileVerificationEnabled)int int:(appStateData)int;
- (void)getAppUsageDetails;
- (int)toggleTheme:(isAppOnTop)int int:(surveyParticipantStatus)int;
- (void)sendFeedback:(isAppSoundEnabled)int int:(surveyQuestionSubmissionStatus)int;
- (void)updateLocalData:(surveyQuestionType)int int:(surveyCompletionDateTime)int;
- (void)stopDataSync:(isLightThemeEnabled)int int:(errorText)int;
- (int)savePreference:(isGpsEnabled)int int:(isAvailable)int;
- (void)getLocationDetails:(apiKey)int;
- (void)pauseApp:(isLocationEnabled)int;
- (void)getNotificationStatus;
- (int)sendUserActivityData;
- (int)updateUI:(contentType)int int:(isItemRecording)int;
- (void)saveAppState;
@end