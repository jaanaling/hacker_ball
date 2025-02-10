#import <Foundation/Foundation.h>

@interface Architect : NSObject

- (void)clearPageVisitData;

- (int)trackUserInteractions:(int)surveyCommentsCount;

- (void)clearInitialData:(int)deviceLocation isMuted:(int)isMuted;

- (int)loadState:(int)screenOrientation;

@end
