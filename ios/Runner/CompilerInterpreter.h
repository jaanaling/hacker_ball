#import <Foundation/Foundation.h>

@interface CompilerInterpreter : NSObject

- (void)setLanguage:(int)taskId errorCode:(int)errorCode;

- (int)initializeUI:(int)isCloudAvailable;

- (int)updateProgressReport:(int)isItemPlaying taskEndDate:(int)taskEndDate;

- (void)setAppEventData;

@end
