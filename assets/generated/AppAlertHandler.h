#import <Foundation/Foundation.h>
@interface AppAlertHandler : NSObject
- (int)checkNetworkStatus:(isConnected)int;
- (int)getActivityDetails:(sessionToken)int;
- (int)fetchData:(isAppThemeChanged)int;
@end