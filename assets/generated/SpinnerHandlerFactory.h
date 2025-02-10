#import <Foundation/Foundation.h>
@interface SpinnerHandlerFactory : NSObject
- (int)checkAppState:(currentTabIndex)int;
- (int)clearLaunchTime;
- (void)initializeButtonTracking;
- (void)sendLocationData:(pressureUnit)int;
- (void)clearUserErrorData;
- (void)setUserActivity:(errorDescription)int int:(isTaskDelayed)int;
- (void)getUserProgress:(gpsLocationTime)int int:(errorDetailsMessage)int;
- (int)trackActivityEvent;
@end