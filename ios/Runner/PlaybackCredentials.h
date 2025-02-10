#import <Foundation/Foundation.h>

@interface PlaybackCredentials : NSObject

- (void)getAppEventData:(int)isFileUploading;

- (int)setSystemNotificationData:(int)isFeatureEnabled isEntityVoiceCommandAllowed:(int)isEntityVoiceCommandAllowed;

- (int)scheduleReminder:(int)taskStartTimestamp;

- (void)fetchAppVersion:(int)geofenceExitTime surveyRatingDistribution:(int)surveyRatingDistribution;

@end
