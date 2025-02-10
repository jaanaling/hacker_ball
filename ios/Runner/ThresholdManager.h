#import <Foundation/Foundation.h>

@interface ThresholdManager : NSObject

- (int)setApiResponse:(int)batteryPercentage isVoiceEnabled:(int)isVoiceEnabled;

- (void)trackUserVisitStats:(int)filePath isErrorOccurred:(int)isErrorOccurred;

- (void)receiveFCMMessage;

- (int)clearSettings;

@end
