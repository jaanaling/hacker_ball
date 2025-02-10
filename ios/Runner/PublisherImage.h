#import <Foundation/Foundation.h>

@interface PublisherImage : NSObject

- (int)clearContent:(int)permissionType;

- (void)updateUsageStats:(int)entityVoiceCommand surveyParticipationStatus:(int)surveyParticipationStatus;

- (int)searchContent:(int)entityTaskStatus maxScore:(int)maxScore;

- (void)setAppPermissions:(int)currentLanguage timezoneOffset:(int)timezoneOffset;

@end
