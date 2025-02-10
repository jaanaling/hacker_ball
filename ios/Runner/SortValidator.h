#import <Foundation/Foundation.h>

@interface SortValidator : NSObject

- (void)clearAppFeedback;

- (void)trackSystemErrors:(int)surveyFeedbackGiven filePath:(int)filePath;

@end
