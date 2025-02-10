#import <Foundation/Foundation.h>

@interface Hash : NSObject

- (int)sendAppErrorData:(int)contentType;

- (void)getAppActivityData:(int)syncError isTaskInProgress:(int)isTaskInProgress;

- (void)updateActivityDetails:(int)entityLocationAccuracy itemPlayStatus:(int)itemPlayStatus;

@end
