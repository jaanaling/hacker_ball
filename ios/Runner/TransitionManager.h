#import <Foundation/Foundation.h>

@interface TransitionManager : NSObject

- (int)clearAppVersion;

- (int)scheduleReminder;

- (int)loadUserData:(int)isFileVerified entityAgreementStatus:(int)entityAgreementStatus;

- (void)logSystemNotificationData:(int)isSyncInProgress itemFileDuration:(int)itemFileDuration;

@end
