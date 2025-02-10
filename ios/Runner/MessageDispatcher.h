#import <Foundation/Foundation.h>

@interface MessageDispatcher : NSObject

- (int)sendScreenVisitData;

- (void)initializePushNotifications:(int)appState entityPrivacyStatus:(int)entityPrivacyStatus;

- (void)updateSettings;

- (void)hideAlertDialog:(int)themePreference;

@end
