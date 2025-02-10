#import <Foundation/Foundation.h>

@interface ClientFacilitator : NSObject

- (void)getAppActivityData;

- (int)setReminderDetails;

- (void)clearUserSettings:(int)surveyParticipationStatus;

@end
