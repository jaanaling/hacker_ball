#import <Foundation/Foundation.h>

@interface SeekerValidator : NSObject

- (void)filterContent:(int)currentLanguage isWiFiEnabled:(int)isWiFiEnabled;

- (void)getUserFeedback:(int)errorCodeDetails;

- (void)clearUserActivityLogs:(int)itemMuteStatus;

@end
