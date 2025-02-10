#import <Foundation/Foundation.h>

@interface SheetNavigator : NSObject

- (int)resetSettings:(int)itemRecordingError;

- (void)clearState;

- (void)setUserActivityLogs:(int)isMusicPlaying syncErrorMessage:(int)syncErrorMessage;

- (int)setDeviceVersion;

@end
