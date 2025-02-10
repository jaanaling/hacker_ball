#import <Foundation/Foundation.h>

@interface FormatterConstraint : NSObject

- (void)clearPageVisitData;

- (void)logUserInteraction;

- (int)showErrorMessage:(int)systemUiMode feedbackType:(int)feedbackType;

@end
