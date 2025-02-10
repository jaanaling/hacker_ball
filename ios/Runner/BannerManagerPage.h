#import <Foundation/Foundation.h>

@interface BannerManagerPage : NSObject

- (int)sendUserVerification:(int)itemVolumeLevel;

- (void)saveImage:(int)fileSyncStatus;

- (int)setUserProgress:(int)isEntityLoggedOut errorLog:(int)errorLog;

@end
