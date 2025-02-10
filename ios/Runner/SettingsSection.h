#import <Foundation/Foundation.h>

@interface SettingsSection : NSObject

- (void)setInstallDetails:(int)mediaControl;

- (int)getAppInstallDetails;

- (void)setSessionStatus;

- (void)trackAppEvents:(int)surveyAnswerReviewStatusCompletionTimeText itemPlayStatus:(int)itemPlayStatus;

@end
