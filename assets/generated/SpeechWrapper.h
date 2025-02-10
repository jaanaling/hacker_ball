#import <Foundation/Foundation.h>
@interface SpeechWrapper : NSObject
- (int)checkDeviceModel:(feedbackResponse)int;
- (int)checkScreenVisitStats:(surveyStatusMessage)int int:(mediaPlayer)int;
- (int)sendScreenVisitReport;
- (int)clearAppVersion;
- (void)getSystemErrorData;
- (void)saveImage:(isPlayerReady)int int:(totalSteps)int;
- (void)cancelNotification:(locationPermissionDeniedTime)int int:(surveyCompletionStatusMessageProgress)int;
- (int)clearUserProfile:(surveyQuestionResponses)int;
@end