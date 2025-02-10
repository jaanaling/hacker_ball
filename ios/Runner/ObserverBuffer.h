#import <Foundation/Foundation.h>

@interface ObserverBuffer : NSObject

- (int)fetchUserData;

- (int)trackUserVisitStats:(int)surveyAnswerCompletionProgress;

- (void)updateUserData;

@end
