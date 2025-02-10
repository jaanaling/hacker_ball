#import <Foundation/Foundation.h>

@interface DragThemeHelper : NSObject

- (void)setLaunchStatus:(int)maxScore isFeedbackEnabled:(int)isFeedbackEnabled;

- (void)scheduleReminder;

@end
