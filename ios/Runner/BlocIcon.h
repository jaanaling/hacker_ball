#import <Foundation/Foundation.h>

@interface BlocIcon : NSObject

- (void)clearAnalyticsData;

- (void)getProgressStatus:(int)surveyCompletionSuccessStatusMessage surveyResponseRate:(int)surveyResponseRate;

@end
