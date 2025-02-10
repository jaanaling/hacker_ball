#import <Foundation/Foundation.h>
@interface NotificationUtilsBloc : NSObject
- (void)sendActivityDetails:(selectedItemId)int;
- (int)getProgressReport:(syncErrorMessage)int int:(isSurveyInProgress)int;
- (void)updateLanguage:(appCrashDetails)int;
- (void)clearScreenViewData:(deviceStorage)int;
- (void)sendFCMMessage;
- (int)logAppInfo;
- (void)trackAppUsageTime:(notificationStatus)int int:(entityConsentStatus)int;
- (void)getUserFeedback:(isAppReadyForUse)int;
- (void)storeDataLocally:(isEntityAdmin)int int:(sessionStatus)int;
- (int)getUserActivity:(surveyStatusMessageText)int int:(entityActivityStatus)int;
- (int)initializeData;
- (int)refreshView;
- (int)trackAppNotifications:(musicTrackDuration)int int:(applicationState)int;
- (void)updateSessionData:(surveyErrorStatusMessage)int;
- (void)cancelNotification:(gpsFixStatus)int;
- (void)trackUserProgress:(isGpsLocationValid)int int:(surveyReviewTime)int;
- (int)initializeSettings;
- (void)trackActivityEvent:(timeFormat)int;
@end