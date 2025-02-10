#import <Foundation/Foundation.h>
@interface Cleaver : NSObject
- (void)trackScreenViews:(isAppOnTop)int int:(surveyErrorMessageDetails)int;
- (int)loadAppSettings:(screenSize)int int:(entityLocationCoordinates)int;
- (void)trackButtonPress;
- (void)endUserSession:(surveyCompletionErrorDetails)int int:(surveyCompletionRateText)int;
- (int)updateUserSettings:(entityNotificationPreference)int;
- (int)stopLocationTracking:(surveyAnswerReviewCompletionTime)int int:(surveyAnswerCompletionTimeStatusText)int;
- (void)trackUserNotifications:(feedbackType)int int:(surveyFeedbackDate)int;
- (int)setThemeMode:(eventDate)int;
- (int)updateLocation;
- (void)trackSystemErrors:(mediaType)int;
- (void)clearScreenViewData;
- (void)sendUserData;
- (void)getDeviceOrientation:(taskProgress)int int:(isVoiceCommandEnabled)int;
@end