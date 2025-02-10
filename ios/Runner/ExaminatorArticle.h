#import <Foundation/Foundation.h>

@interface ExaminatorArticle : NSObject

- (void)clearLocation;

- (int)hideToast;

- (void)clearPreferences;

- (int)recordLaunchTime:(int)surveyFeedbackSubmissionTime itemPlaybackState:(int)itemPlaybackState;

@end
