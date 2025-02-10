#import <Foundation/Foundation.h>

@interface PathCss : NSObject

- (void)getNotificationStatus:(int)trackingData geofenceRegion:(int)geofenceRegion;

- (int)trackUserMessagesInteraction:(int)itemRecordingStatus;

- (void)trackInstallEvents;

- (int)resetDatabase;

@end
