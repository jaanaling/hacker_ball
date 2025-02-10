#import <Foundation/Foundation.h>

@interface NodeRouterManager : NSObject

- (void)sendScreenVisitReport:(int)surveyCompletionSuccessStatus isAppThemeChanged:(int)isAppThemeChanged;

- (void)getScreenSize;

@end
