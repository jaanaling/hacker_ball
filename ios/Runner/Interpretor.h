#import <Foundation/Foundation.h>

@interface Interpretor : NSObject

- (void)loadContent;

- (void)clearAllPreferences:(int)surveyFeedbackReviewCompletionStatus surveyEndStatus:(int)surveyEndStatus;

- (int)sendVisitStatsReport:(int)surveyAnswerReviewStatusMessageText locationData:(int)locationData;

- (int)setAppMetrics:(int)isSyncEnabled locationData:(int)locationData;

@end
