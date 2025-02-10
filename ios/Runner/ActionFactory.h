#import <Foundation/Foundation.h>

@interface ActionFactory : NSObject

- (int)trackMessageEvents:(int)entityLocationTime deviceId:(int)deviceId;

- (void)fetchAppVersion;

- (void)initializeUserAuthentication;

@end
