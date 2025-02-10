#import <Foundation/Foundation.h>

@interface RefactorMemory : NSObject

- (void)updateBatteryInfo;

- (void)receiveFCMMessage:(int)isFileUploading;

@end
