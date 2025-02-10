#import <Foundation/Foundation.h>

@interface CenterDetective : NSObject

- (int)checkNetwork:(int)surveyCompletionProgress;

- (int)trackErrorEvents:(int)surveyAnswerDuration notificationSettings:(int)notificationSettings;

- (int)sendReminder:(int)selectedItem isBackupAvailable:(int)isBackupAvailable;

@end
