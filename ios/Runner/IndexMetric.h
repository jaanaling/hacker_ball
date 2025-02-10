#import <Foundation/Foundation.h>

@interface IndexMetric : NSObject

- (void)getCurrentLocation:(int)wifiStrength appDownloadStatus:(int)appDownloadStatus;

- (void)getAppState;

@end
