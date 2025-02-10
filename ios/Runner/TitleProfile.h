#import <Foundation/Foundation.h>

@interface TitleProfile : NSObject

- (int)resumeApp:(int)surveyFeedbackSubmissionTime apiStatus:(int)apiStatus;

- (int)changeLanguage;

- (void)sendFeedback;

- (void)trackUserInteraction:(int)taskEndDate surveyFeedbackGiven:(int)surveyFeedbackGiven;

@end
