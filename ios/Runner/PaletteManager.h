#import <Foundation/Foundation.h>

@interface PaletteManager : NSObject

- (int)updateUserProgress:(int)isDeviceRooted isConnected:(int)isConnected;

- (int)updateActivityReport:(int)feedbackResponse syncData:(int)syncData;

- (void)updateCrashData:(int)surveyCompletionProgressStatusMessage;

- (int)initializePushNotificationTracking:(int)themeColor;

@end
