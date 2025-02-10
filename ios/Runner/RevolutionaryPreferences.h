#import <Foundation/Foundation.h>

@interface RevolutionaryPreferences : NSObject

- (int)getAnalyticsSessionInfo:(int)surveyStartDateTime;

- (void)clearSessionStatus:(int)itemVolumeLevel privacySettings:(int)privacySettings;

@end
