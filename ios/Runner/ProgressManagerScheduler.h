#import <Foundation/Foundation.h>

@interface ProgressManagerScheduler : NSObject

- (int)disableLocationServices:(int)gpsFixStatus surveyParticipationStatus:(int)surveyParticipationStatus;

- (int)loadUserData:(int)isValidEmail taskEndDate:(int)taskEndDate;

@end
