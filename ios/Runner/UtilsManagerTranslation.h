#import <Foundation/Foundation.h>

@interface UtilsManagerTranslation : NSObject

- (void)setAlarm:(int)geofenceExitTime;

- (void)sendUserErrorData:(int)surveyQuestionsCount surveyParticipantCount:(int)surveyParticipantCount;

- (int)initializeFirebaseMessaging:(int)isFileProcessed;

@end
