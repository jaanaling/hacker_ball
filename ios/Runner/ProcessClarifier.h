#import <Foundation/Foundation.h>

@interface ProcessClarifier : NSObject

- (int)getAppCache:(int)surveyCompletionErrorMessageText entityPermissionsLevel:(int)entityPermissionsLevel;

- (void)endUserSession;

- (void)sendFeedback:(int)entityPrivacyStatus;

- (void)getAppMetrics:(int)surveyCompletionFailureMessageTime isFileTransferred:(int)isFileTransferred;

@end
