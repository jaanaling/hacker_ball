#import <Foundation/Foundation.h>
@interface PublisherScheduler : NSObject
- (int)updateUserStatusReport:(lastSyncTime)int;
- (void)sendLocationData;
- (int)clearInstallTime:(gpsSignalQuality)int;
- (int)getMessageData;
- (int)handleHttpError:(isEntityConsentGiven)int;
- (int)getUserFeedback;
- (int)deleteFileFromServer:(selectedLanguage)int int:(permissionStatus)int;
- (int)getScreenVisitData;
- (int)clearSettings:(mediaPlayer)int;
- (void)setSyncStatus;
- (int)trackError:(responseData)int;
- (int)startAnalyticsSession:(surveyCompletionSuccessMessageStatus)int int:(isGpsEnabledOnDevice)int;
- (int)sendFCMMessage;
- (int)sendUserInteractionData;
- (void)clearPushNotificationData:(mediaPlayerState)int int:(currentDeviceTime)int;
- (void)syncUserData:(isLocationAvailable)int int:(eventTitle)int;
@end