#import <Foundation/Foundation.h>
@interface Initiator : NSObject
- (int)logAppInfo:(surveyCompletionSuccessMessageStatus)int;
- (void)trackActivityEvent:(itemPlaybackPosition)int;
- (void)sendNotificationClickData;
- (void)sendEventToAnalytics:(isAppUpdateRequired)int int:(isAppRunning)int;
- (int)trackPushNotifications;
- (int)sendInteractionData:(reportTitle)int;
- (int)updateLocation;
- (int)getUserActivity:(deviceModelName)int int:(voiceRecognitionError)int;
- (void)initializePermissions:(entityPrivacyStatus)int;
- (int)clearUserStatusReport;
- (void)verifyNetworkConnection;
@end