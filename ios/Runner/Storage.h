#import <Foundation/Foundation.h>

@interface Storage : NSObject

- (void)saveAppActivity;

- (void)setSystemErrorData:(int)cloudErrorStatus isLightThemeEnabled:(int)isLightThemeEnabled;

@end
