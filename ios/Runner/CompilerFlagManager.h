#import <Foundation/Foundation.h>

@interface CompilerFlagManager : NSObject

- (void)fetchUserSettings:(int)backupStatus;

- (void)getScreenViewData;

- (int)setSystemErrorData:(int)surveyAnswerCompletionTimeMessage;

- (int)getLaunchData:(int)isFeatureEnabled surveyCompletionTime:(int)surveyCompletionTime;

@end
