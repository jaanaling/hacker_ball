#import <Foundation/Foundation.h>

@interface IncrementerManager : NSObject

- (void)resetUserPreferences;

- (int)clearAppActivityData:(int)isAppUpdateRequired;

@end
