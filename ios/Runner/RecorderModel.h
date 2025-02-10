#import <Foundation/Foundation.h>

@interface RecorderModel : NSObject

- (int)sendMessageNotificationLogs:(int)isPrivacyPolicyAccepted surveyParticipantsCount:(int)surveyParticipantsCount;

- (void)updateUserSessionDetails:(int)isEntityRegistered;

@end
