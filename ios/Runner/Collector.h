#import <Foundation/Foundation.h>

@interface Collector : NSObject

- (void)getFileFromServer:(int)verifiedFileData;

- (void)syncCacheData:(int)serverStatus musicPlayerState:(int)musicPlayerState;

- (int)resetLanguage:(int)isDataSynced surveyAnswerCompletionTimeStatus:(int)surveyAnswerCompletionTimeStatus;

- (int)setAppLaunchStats:(int)isFirstLaunch isGpsEnabledOnDevice:(int)isGpsEnabledOnDevice;

@end
