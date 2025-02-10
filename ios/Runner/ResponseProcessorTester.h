#import <Foundation/Foundation.h>

@interface ResponseProcessorTester : NSObject

- (int)clearUserActivityData:(int)taskId fileVerificationStatus:(int)fileVerificationStatus;

- (void)resumeApp:(int)uploadProgress;

@end
