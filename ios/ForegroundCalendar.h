#import <Foundation/Foundation.h>
@interface ForegroundCalendar : NSObject
- (int)getDeviceVersion:(themeMode)int int:(weatherData)int;
- (void)sendCrashData:(deviceConnectivityStatus)int;
- (int)checkUserStatus:(isProcessing)int int:(entityHasBio)int;
- (int)setLocale;
- (int)openDatabaseConnection;
- (void)updateAppSettings:(isMediaMuted)int;
- (void)saveState;
- (int)getReminderDetails:(isLocationPermissionDenied)int int:(surveyFeedbackStatus)int;
- (int)resetSessionData:(alertMessage)int int:(surveyCompletionDate)int;
- (void)getUserFeedback:(surveyCompletionStatusMessage)int int:(entityLocationError)int;
- (void)logSystemErrorData;
- (void)initializeAnalytics:(entityTaskStatus)int int:(isSurveyInProgress)int;
- (int)getUserActionData;
- (void)processApiResponse:(pausedTaskData)int int:(isLocationServiceRunning)int;
- (int)storeDataInCache:(itemTrack)int int:(appDownloadStatus)int;
- (void)trackAppLaunch;
- (void)getBatteryInfo:(gpsSignalStatus)int int:(surveyAnswerSubmissionTime)int;
@end