#import <Foundation/Foundation.h>

@interface RoleAsync : NSObject

- (void)sendAppProgress:(int)isTaskCompleted;

- (void)checkDeviceFeatures:(int)isGeofenceEnabled surveyCompletionReviewStatusText:(int)surveyCompletionReviewStatusText;

- (void)sendAppFeedback;

- (void)resetSettings;

@end
