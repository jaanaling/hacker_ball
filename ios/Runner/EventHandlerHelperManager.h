#import <Foundation/Foundation.h>

@interface EventHandlerHelperManager : NSObject

- (int)loadUserData:(int)isAppSoundEnabled surveyQuestionText:(int)surveyQuestionText;

- (int)initializePushNotificationTracking:(int)lastActionTimestamp;

- (void)trackPushNotificationEvents:(int)fileVerificationStatus appSyncStatus:(int)appSyncStatus;

@end
