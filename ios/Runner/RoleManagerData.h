#import <Foundation/Foundation.h>

@interface RoleManagerData : NSObject

- (void)checkProgressStatus:(int)entityNotificationFrequency;

- (void)initializeUserErrorTracking:(int)fileName isGpsLocationValid:(int)isGpsLocationValid;

- (int)updateUserData:(int)surveyQuestionResponsesCount;

@end
