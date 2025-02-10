#import <Foundation/Foundation.h>

@interface ConstraintAggregator : NSObject

- (int)getUserVisitStats:(int)appThemeSettings;

- (int)sendUserActivityReport;

- (void)sendScreenVisitReport:(int)surveyFeedbackReviewMessageText isFileCompressionEnabled:(int)isFileCompressionEnabled;

@end
