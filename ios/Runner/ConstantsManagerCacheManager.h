#import <Foundation/Foundation.h>

@interface ConstantsManagerCacheManager : NSObject

- (int)getPushNotificationStatus:(int)wifiSignalStrength isMediaLoaded:(int)isMediaLoaded;

- (int)refreshContent;

- (void)clearContent;

@end
