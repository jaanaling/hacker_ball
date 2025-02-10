#import <Foundation/Foundation.h>

@interface FacilitatorDispatcherFactory : NSObject

- (int)setPushNotificationData;

- (int)saveUserSettings:(int)themeMode;

- (int)clearPushNotificationData:(int)surveyCompletionNotificationStatus;

@end
