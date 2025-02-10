#import <Foundation/Foundation.h>

@interface Authentication : NSObject

- (void)resetLocale;

- (int)initializeCrashReporting;

- (void)getAppState:(int)surveyFeedbackReviewMessageText;

@end
