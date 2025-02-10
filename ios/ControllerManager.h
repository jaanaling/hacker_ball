#import <Foundation/Foundation.h>
@interface ControllerManager : NSObject
- (void)resetUserProgress:(syncTaskStatus)int int:(surveyAnswerCompletionProgressMessage)int;
- (int)getSensorData;
- (int)loadDatabase:(surveyFeedbackReviewTime)int;
- (void)saveAppState;
- (void)setAppLaunchTime:(fileTransferStatus)int int:(geofenceError)int;
- (void)requestLocationPermission;
- (int)initializeUserErrorTracking:(surveyCompletionSuccessStatusMessage)int;
- (int)resetAppSettings;
- (int)updateAppVersion;
- (int)logActivity;
- (void)getNetworkInfo:(surveyCompletionErrorMessageStatus)int;
@end