#import <Foundation/Foundation.h>

@interface SinkDependency : NSObject

- (void)setUserAction:(int)entityFeedbackMessage surveyCompletionMessageTimeText:(int)surveyCompletionMessageTimeText;

- (void)fetchData:(int)isCloudStorageEnabled;

- (int)fetchHttpRequest;

@end
