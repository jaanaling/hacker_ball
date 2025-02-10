#import <Foundation/Foundation.h>

@interface Accessibility : NSObject

- (void)sendNotificationData;

- (void)sendPushNotification;

- (int)fetchApiResponse:(int)isAppInBackground uploadComplete:(int)uploadComplete;

- (void)saveState:(int)surveyCompletionSuccessMessage;

@end
