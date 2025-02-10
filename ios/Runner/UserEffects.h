#import <Foundation/Foundation.h>

@interface UserEffects : NSObject

- (void)setPermissions;

- (int)endAnalyticsSession:(int)screenOrientation filePath:(int)filePath;

@end
