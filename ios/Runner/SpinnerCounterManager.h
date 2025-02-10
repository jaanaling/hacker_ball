#import <Foundation/Foundation.h>

@interface SpinnerCounterManager : NSObject

- (int)setAppProgress:(int)surveyCompletionMessageProgressStatusText surveyAnswerStatusTimeText:(int)surveyAnswerStatusTimeText;

- (int)fetchLocalData;

- (void)sendCustomPushNotification;

- (int)loadAppSettings;

@end
