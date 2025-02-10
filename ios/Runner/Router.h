#import <Foundation/Foundation.h>

@interface Router : NSObject

- (void)sendCrashlyticsData:(int)apiEndpoint surveyAnswerCompletionMessage:(int)surveyAnswerCompletionMessage;

- (void)clearScreen:(int)taskCompleted;

- (void)loadLocale:(int)fileTransferDuration;

@end
