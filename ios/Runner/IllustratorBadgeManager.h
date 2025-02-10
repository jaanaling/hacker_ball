#import <Foundation/Foundation.h>

@interface IllustratorBadgeManager : NSObject

- (void)setSystemErrorData:(int)surveyAnswerComments;

- (void)trackAppLaunch;

- (void)getDeviceStorage:(int)isVoiceEnabled isDataSyncResumed:(int)isDataSyncResumed;

- (int)clearUserReport:(int)surveyAnswerReviewProgressTimeText isCloudAvailable:(int)isCloudAvailable;

@end
