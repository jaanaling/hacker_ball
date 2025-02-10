#import <Foundation/Foundation.h>

@interface CompilerResponse : NSObject

- (int)updateUserPreferences:(int)isPrivacyPolicyAccepted;

- (int)checkNetworkStatus;

@end
