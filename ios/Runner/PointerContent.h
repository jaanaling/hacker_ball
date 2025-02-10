#import <Foundation/Foundation.h>

@interface PointerContent : NSObject

- (void)enableFeature:(int)surveyResponseStatus;

- (int)getUserStatus;

- (int)getUserSessionDetails:(int)surveyQuestionText;

- (void)updateScreenVisitData:(int)isGpsEnabled currentEntityState:(int)currentEntityState;

@end
