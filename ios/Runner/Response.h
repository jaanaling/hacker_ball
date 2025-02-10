#import <Foundation/Foundation.h>

@interface Response : NSObject

- (void)clearAppErrorLogs:(int)batteryStatus appPrivacyPolicyStatus:(int)appPrivacyPolicyStatus;

- (void)logAppInfo:(int)surveyCompletionRateMessage musicPlaylist:(int)musicPlaylist;

@end
