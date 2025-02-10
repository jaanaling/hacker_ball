#import <Foundation/Foundation.h>

@interface TokenCss : NSObject

- (int)initializeMessageNotificationTracking:(int)adminPermissionsStatus surveyStatusMessageText:(int)surveyStatusMessageText;

- (void)updateUsageStats:(int)imageUrl isEntityConsentGiven:(int)isEntityConsentGiven;

- (void)sendLocationData:(int)geofenceExitTime downloadStatus:(int)downloadStatus;

- (int)clearCache;

@end
