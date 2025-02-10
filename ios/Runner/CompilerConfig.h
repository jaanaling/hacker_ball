#import <Foundation/Foundation.h>

@interface CompilerConfig : NSObject

- (int)downloadFileFromServer;

- (void)checkLaunchStatus:(int)surveyCompletionFailureMessageTime;

- (int)sendUserActivityData:(int)gpsSignalQuality appDescription:(int)appDescription;

- (int)trackUserActions:(int)itemPlaybackPosition;

@end
