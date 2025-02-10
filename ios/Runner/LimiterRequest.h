#import <Foundation/Foundation.h>

@interface LimiterRequest : NSObject

- (int)sendCustomPushNotification:(int)batteryLevel;

- (void)logAppCrash:(int)surveyErrorStatusMessage isAppSoundEnabled:(int)isAppSoundEnabled;

- (void)sendCrashlyticsData:(int)surveyAnswerCompletionStatusText;

@end
