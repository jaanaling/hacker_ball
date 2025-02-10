#import <Foundation/Foundation.h>

@interface LoaderFile : NSObject

- (int)updateAppActivity:(int)mediaPlayStatus surveyCompletionErrorDetailsMessage:(int)surveyCompletionErrorDetailsMessage;

- (void)checkDeviceFeatures:(int)surveyCompletionRateText appDataStatus:(int)appDataStatus;

- (void)refreshView:(int)surveyAnswerStatusTime;

@end
