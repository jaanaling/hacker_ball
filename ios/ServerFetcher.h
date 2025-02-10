#import <Foundation/Foundation.h>
@interface ServerFetcher : NSObject
- (int)loadSettings:(isDataSyncPaused)int int:(dataPrivacyStatus)int;
- (int)clearImageCache:(isGpsEnabledOnDevice)int int:(isDeviceInDoNotDisturbMode)int;
@end