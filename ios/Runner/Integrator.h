#import <Foundation/Foundation.h>

@interface Integrator : NSObject

- (void)trackUserActivity:(int)surveyAnswerCompletionTimeProgress;

- (void)fetchAppVersion:(int)isDeviceInDoNotDisturbMode;

@end
