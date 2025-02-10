#import <Foundation/Foundation.h>
@interface Api : NSObject
- (void)saveSessionData:(reportTitle)int;
- (void)checkUserData:(surveyStartDate)int int:(entityDataStatus)int;
- (void)trackButtonPress;
- (void)trackActivity;
- (void)sendUpdateData:(notificationFrequency)int int:(musicTrackDuration)int;
- (void)cancelNotification;
- (int)clearUserReport:(surveyEndDateTime)int int:(surveyErrorMessageStatus)int;
- (int)clearSyncData:(surveySubmissionStatus)int;
- (int)logActivity;
- (void)resetUserProgress;
- (int)getAppSettings;
- (void)trackScreenVisits:(surveyFeedbackStatusTimeText)int int:(wifiSignalStrength)int;
@end