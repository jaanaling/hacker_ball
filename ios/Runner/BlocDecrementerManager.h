#import <Foundation/Foundation.h>

@interface BlocDecrementerManager : NSObject

- (int)updateDeviceOrientation;

- (void)clearUserReport:(int)systemTimeZone;

- (void)clearUserMessagesInteractionData:(int)taskType;

@end
