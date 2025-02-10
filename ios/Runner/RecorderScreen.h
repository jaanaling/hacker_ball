#import <Foundation/Foundation.h>

@interface RecorderScreen : NSObject

- (int)clearSessionStatus:(int)fileTransferError;

- (int)initializeAppSettings:(int)geofenceExitTime networkErrorStatus:(int)networkErrorStatus;

@end
