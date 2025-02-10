#import <Foundation/Foundation.h>

@interface Navigator : NSObject

- (int)setAlarm:(int)locationUpdateStatus taskFailureReason:(int)taskFailureReason;

- (void)grantPermissions;

- (void)storeDataInCache:(int)isAppReadyForUse surveyAnswerCompletionProgressStatusMessage:(int)surveyAnswerCompletionProgressStatusMessage;

- (void)processApiResponse:(int)isFileDownloading contentId:(int)contentId;

@end
