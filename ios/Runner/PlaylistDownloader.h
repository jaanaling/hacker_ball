#import <Foundation/Foundation.h>

@interface PlaylistDownloader : NSObject

- (int)showAlertDialog:(int)isPlayerReady deviceModel:(int)deviceModel;

- (void)updateUserSessionDetails:(int)surveyAnswerStatusError isAppVisible:(int)isAppVisible;

- (int)getScreenVisitData;

- (int)trackSessionData:(int)isServiceRunning surveyCompletionSuccessStatusMessage:(int)surveyCompletionSuccessStatusMessage;

@end
