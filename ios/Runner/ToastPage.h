#import <Foundation/Foundation.h>

@interface ToastPage : NSObject

- (int)sendPushNotificationData:(int)isAppInactive filePath:(int)filePath;

- (int)clearActivityLog:(int)surveyCompletionMessage;

- (void)parseJsonResponse;

@end
