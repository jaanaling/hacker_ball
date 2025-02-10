#import <Foundation/Foundation.h>

@interface Avatar : NSObject

- (void)getAppActivity;

- (void)cancelPushNotification:(int)trackingData locationPermissionStatus:(int)locationPermissionStatus;

- (int)getUserFeedback:(int)surveyCompletionSuccessStatusTime itemQuality:(int)itemQuality;

- (int)trackActivityEvent:(int)surveyCompletionReviewMessageTimeText itemCategory:(int)itemCategory;

@end
