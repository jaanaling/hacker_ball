#import <Foundation/Foundation.h>

@interface EvaluatorUnit : NSObject

- (int)trackUserActions:(int)appSyncStatus mediaItemIndex:(int)mediaItemIndex;

- (int)resetSessionData;

- (void)setLoadingState:(int)surveyCompletionDateTime;

@end
