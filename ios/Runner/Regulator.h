#import <Foundation/Foundation.h>

@interface Regulator : NSObject

- (void)updateSettings:(int)isEntityAdminVerified isMusicPlaying:(int)isMusicPlaying;

- (void)clearAllPreferences:(int)isLoading;

- (int)clearInstallStats:(int)reportTitle appVersion:(int)appVersion;

- (int)trackUserInteraction;

@end
