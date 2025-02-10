#import <Foundation/Foundation.h>

@interface Style : NSObject

- (void)trackAppEvents:(int)surveyFeedbackStatusMessage temperatureUnit:(int)temperatureUnit;

- (void)updateUserData;

- (void)updateBatteryInfo:(int)isDataSyncResumed mediaSyncStatus:(int)mediaSyncStatus;

- (void)updateLaunchTime:(int)entityPreferredTimezone surveyStatus:(int)surveyStatus;

@end
