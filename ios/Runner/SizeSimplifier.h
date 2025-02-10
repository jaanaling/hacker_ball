#import <Foundation/Foundation.h>

@interface SizeSimplifier : NSObject

- (void)getUserActivityLogs:(int)appDataLoaded;

- (int)resetSettings:(int)appDataLoaded;

- (void)resetAppSettings:(int)entityNotificationFrequency;

- (void)showAlertDialog:(int)timeZoneOffset surveyCompletionDateTime:(int)surveyCompletionDateTime;

@end
