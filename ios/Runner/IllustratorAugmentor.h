#import <Foundation/Foundation.h>

@interface IllustratorAugmentor : NSObject

- (int)clearContent:(int)surveyAnswerCompletionMessageProgress taskCompleted:(int)taskCompleted;

- (int)restartApp:(int)surveyAnswerCompletionStatusTimeText gpsCoordinates:(int)gpsCoordinates;

- (void)updateDeviceActivity;

- (int)loadState;

@end
