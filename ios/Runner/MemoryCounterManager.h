#import <Foundation/Foundation.h>

@interface MemoryCounterManager : NSObject

- (int)sendUserActionData;

- (void)sendScreenVisitData:(int)fileFormat taskProgressStatus:(int)taskProgressStatus;

- (void)getUserProgress:(int)appFeature;

@end
