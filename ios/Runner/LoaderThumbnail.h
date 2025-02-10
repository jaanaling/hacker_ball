#import <Foundation/Foundation.h>

@interface LoaderThumbnail : NSObject

- (void)clearErrorData:(int)surveyCompletionMessageProgressStatusText;

- (void)refreshContent:(int)itemBuffering;

- (int)getInteractionDetails:(int)surveyCompletionSuccessStatusMessage surveyQuestionId:(int)surveyQuestionId;

- (void)getSensorData:(int)fileFormat isAppSoundEnabled:(int)isAppSoundEnabled;

@end
