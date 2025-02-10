#import <Foundation/Foundation.h>

@interface NoteStorage : NSObject

- (void)handleApiError:(int)isLocationPermissionDenied isFileProcessed:(int)isFileProcessed;

- (int)clearAnalyticsData:(int)doNotDisturbStatus;

@end
