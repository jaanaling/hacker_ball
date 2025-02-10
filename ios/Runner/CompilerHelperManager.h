#import <Foundation/Foundation.h>

@interface CompilerHelperManager : NSObject

- (void)updateAppReport;

- (int)getLocationPermissionStatus:(int)weatherCondition;

- (int)clearScreen:(int)surveyAnswerCompletionTimeText;

@end
