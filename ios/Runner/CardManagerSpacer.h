#import <Foundation/Foundation.h>

@interface CardManagerSpacer : NSObject

- (void)sendUserActionData;

- (void)restartApp;

- (void)clearUpdateData;

- (void)getUpdateStatus:(int)surveyCompletionDateTime isDeviceInLandscapeMode:(int)isDeviceInLandscapeMode;

@end
