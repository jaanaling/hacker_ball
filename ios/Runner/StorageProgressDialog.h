#import <Foundation/Foundation.h>

@interface StorageProgressDialog : NSObject

- (void)getPushNotificationStatus;

- (void)initializeAppVersionTracking:(int)isSurveyAnonymous isBluetoothEnabled:(int)isBluetoothEnabled;

- (void)getPermissions:(int)mediaTitle taskProgress:(int)taskProgress;

@end
