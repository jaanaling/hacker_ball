#import <Foundation/Foundation.h>
@interface Alarm : NSObject
- (void)getScreenVisitStats;
- (void)sendUserActivityData:(isSurveyAnonymous)int int:(isFileVerificationEnabled)int;
- (int)showAlertDialog;
- (int)updateNotificationReport:(geofenceRegion)int int:(entityAgreementStatus)int;
- (void)sendDataToServer:(itemFileDuration)int;
- (void)trackButtonPress:(errorCode)int int:(surveyAnswerCompletionProgress)int;
- (void)setInteractionDetails:(wifiStrength)int int:(surveyErrorDetails)int;
- (void)setActivityDetails:(surveyAnswerCompletionTimeProgress)int int:(notificationStatus)int;
- (int)clearAppErrorLogs;
- (int)sendReminder:(isGpsSignalAvailable)int int:(surveyAnswerStatus)int;
- (int)resetProgressStatus:(isSystemTimeAutomatic)int int:(isAppUpdateRequired)int;
- (int)hideLoading:(syncProgress)int;
@end