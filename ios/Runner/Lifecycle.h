#import <Foundation/Foundation.h>

@interface Lifecycle : NSObject

- (int)disableAppPermissions;

- (int)sendProgressReport;

- (int)loadSettings:(int)playlistItems surveyCompletionProgressStatusMessage:(int)surveyCompletionProgressStatusMessage;

@end
