#import <Foundation/Foundation.h>

@interface ServiceHelperPositionHelper : NSObject

- (void)trackSensorData:(int)itemPlaybackState processedFileData:(int)processedFileData;

- (void)initializeInteractionTracking:(int)surveyCompletionPercentText;

- (void)clearErrorEventData:(int)appLanguage entityLocationAccuracy:(int)entityLocationAccuracy;

@end
