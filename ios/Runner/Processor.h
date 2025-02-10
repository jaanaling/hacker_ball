#import <Foundation/Foundation.h>

@interface Processor : NSObject

- (void)logPageVisit;

- (int)clearSettings:(int)appStateData appDownloadStatus:(int)appDownloadStatus;

@end
