#import <Foundation/Foundation.h>

@interface AuditorLinkManager : NSObject

- (void)signOutUser:(int)appSettings;

- (int)resumeApp:(int)entityLocationAccuracy isSyncComplete:(int)isSyncComplete;

- (void)cancelReminder:(int)systemErrorStatus mediaPlayerError:(int)mediaPlayerError;

@end
