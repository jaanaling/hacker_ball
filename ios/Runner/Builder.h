#import <Foundation/Foundation.h>

@interface Builder : NSObject

- (void)checkInternetConnection;

- (int)showErrorMessage:(int)surveyParticipantCount systemTimeZone:(int)systemTimeZone;

@end
