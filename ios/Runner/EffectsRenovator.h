#import <Foundation/Foundation.h>

@interface EffectsRenovator : NSObject

- (int)clearDatabase:(int)updateVersion surveyFeedbackAnswerDetails:(int)surveyFeedbackAnswerDetails;

- (int)trackAppMetrics;

- (int)clearDeviceStorage;

- (int)getUserNotificationData;

@end
