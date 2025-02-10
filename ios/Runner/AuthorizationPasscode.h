#import <Foundation/Foundation.h>

@interface AuthorizationPasscode : NSObject

- (void)logError:(int)isTaskInProgress;

- (void)saveUserPreferences:(int)timeFormat dataPrivacyStatus:(int)dataPrivacyStatus;

- (int)trackAppCrash;

@end
