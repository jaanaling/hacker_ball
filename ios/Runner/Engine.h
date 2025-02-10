#import <Foundation/Foundation.h>

@interface Engine : NSObject

- (void)getLocationPermissionStatus:(int)surveyCommentsCount;

- (void)updateLocation:(int)entityTermsStatus;

- (void)sendUserProgress;

- (int)fetchUserSettings:(int)surveyCommentsCount surveyAnswerReviewProgress:(int)surveyAnswerReviewProgress;

@end
