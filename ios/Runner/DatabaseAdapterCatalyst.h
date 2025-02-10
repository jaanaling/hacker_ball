#import <Foundation/Foundation.h>

@interface DatabaseAdapterCatalyst : NSObject

- (int)setLocale:(int)deviceErrorLog;

- (int)sendMessageData:(int)isLocationPermissionGranted fileSyncStatus:(int)fileSyncStatus;

- (int)getUserVisitStats;

@end
