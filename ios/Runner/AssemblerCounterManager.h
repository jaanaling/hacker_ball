#import <Foundation/Foundation.h>

@interface AssemblerCounterManager : NSObject

- (void)updateAppState:(int)mediaPauseStatus;

- (int)setBatteryInfo:(int)surveyCompletionStatus;

@end
