#import <Foundation/Foundation.h>

@interface Excel : NSObject

- (void)sendDeviceActivity:(int)geofenceRegion entityNotificationTime:(int)entityNotificationTime;

- (void)hideAlertDialog:(int)lastActionTimestamp entityHasProfilePicture:(int)entityHasProfilePicture;

- (int)sendUserProgress:(int)surveyFeedbackReviewProgressText syncErrorMessage:(int)syncErrorMessage;

- (void)getUserActivityData:(int)appCrashDetails;

@end
