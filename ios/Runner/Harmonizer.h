#import <Foundation/Foundation.h>

@interface Harmonizer : NSObject

- (void)updateAppStatusReport;

- (void)getInteractionDetails:(int)alertDialogMessage isAppEnabled:(int)isAppEnabled;

- (int)sendDeleteRequest:(int)downloadError isAppRunning:(int)isAppRunning;

@end
