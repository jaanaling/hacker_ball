#import <Foundation/Foundation.h>
@interface ProcessAlert : NSObject
- (int)saveLaunchStatus:(isAppVisible)int int:(currentStep)int;
- (int)displayLoadingIndicator;
- (int)getLoadingState;
- (void)resetLocationDetails:(reportTitle)int;
- (void)resetUserFeedback:(geofenceStatus)int;
- (void)sendUserInteractionData:(surveyStatusMessageText)int int:(deviceErrorLog)int;
- (int)saveUserDetails:(surveyEndDate)int int:(surveyReviewStatusMessage)int;
- (int)updateAppVersion:(surveyEndTime)int;
@end