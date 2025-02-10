#import <Foundation/Foundation.h>

@interface CardEmitter : NSObject

- (void)updateSessionData:(int)isFileProcessed;

- (void)uploadFileToServer;

- (int)clearBackup;

@end
