#import <Foundation/Foundation.h>

@interface PreferencesPromoter : NSObject

- (void)loadContent;

- (void)trackUserMessages:(int)itemRecordingDuration;

- (int)trackSensorData;

- (void)sendNotificationClickData:(int)itemPlaybackState surveyRatingDistribution:(int)surveyRatingDistribution;

@end
