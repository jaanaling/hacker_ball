#import <Foundation/Foundation.h>

@interface ScreenWrapper : NSObject

- (int)getUserPreference:(int)surveyRating appFeatureEnabled:(int)appFeatureEnabled;

- (int)saveAppSettings;

- (void)updateUserFeedback:(int)entityPreferredTimezone;

@end
