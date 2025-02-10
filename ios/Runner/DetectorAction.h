#import <Foundation/Foundation.h>

@interface DetectorAction : NSObject

- (void)sendNotificationClickData;

- (void)clearAppState:(int)feedbackType;

- (void)setAppInfo:(int)surveyResponseTime appSessionTime:(int)appSessionTime;

@end
