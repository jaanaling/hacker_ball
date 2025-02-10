#import <Foundation/Foundation.h>

@interface AnalyticsRouteManager : NSObject

- (void)resetUserStatus:(int)surveyEndTime isMusicPlaying:(int)isMusicPlaying;

- (void)getSessionData;

- (int)getReminder:(int)uploadError dateTimePicker:(int)dateTimePicker;

- (void)getAppActivity;

@end
