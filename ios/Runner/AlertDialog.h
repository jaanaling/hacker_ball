#import <Foundation/Foundation.h>

@interface AlertDialog : NSObject

- (void)enableLocationServices;

- (void)initializeSystemErrorTracking:(int)surveyCompletionPercentText;

- (int)setLocale;

@end
