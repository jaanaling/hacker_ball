#import <Foundation/Foundation.h>

@interface Delay : NSObject

- (void)logPerformance:(int)isEntityOnline syncData:(int)syncData;

- (void)checkScreenVisitStats:(int)deviceModel;

- (void)requestLocationPermission:(int)surveyAnswerCompletionProgressMessageText surveyQuestionSubmissionStatus:(int)surveyQuestionSubmissionStatus;

@end
