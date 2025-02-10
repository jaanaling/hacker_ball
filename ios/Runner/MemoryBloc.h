#import <Foundation/Foundation.h>

@interface MemoryBloc : NSObject

- (int)resetUserActivity;

- (void)resumeApp;

- (int)getLocation:(int)dataSyncStatus itemRecordingDuration:(int)itemRecordingDuration;

@end
