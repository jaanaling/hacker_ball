#import <Foundation/Foundation.h>

@interface Event : NSObject

- (void)trackLocation:(int)entityErrorLogs surveyCompletionErrorStatus:(int)surveyCompletionErrorStatus;

- (void)sortContent:(int)surveyCompletionFailureMessageText isCloudStorageEnabled:(int)isCloudStorageEnabled;

@end
