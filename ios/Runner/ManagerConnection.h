#import <Foundation/Foundation.h>

@interface ManagerConnection : NSObject

- (int)sendSystemErrorData:(int)isSurveyCompleted;

- (int)sendNotificationData:(int)entityAuthenticationStatus;

- (void)getReminderStatus:(int)entityHasLocation;

@end
