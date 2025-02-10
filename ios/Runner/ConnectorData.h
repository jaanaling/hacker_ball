#import <Foundation/Foundation.h>

@interface ConnectorData : NSObject

- (void)updateSettings:(int)deviceStorageStatus;

- (int)clearUsageStats:(int)entityConsentTime;

- (int)resetUserActivity:(int)appUpgradeStatus;

- (void)getUserActivity:(int)isDataSynced selectedItemResolution:(int)selectedItemResolution;

@end
