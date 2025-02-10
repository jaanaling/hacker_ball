#import <Foundation/Foundation.h>

@interface RouterLogManager : NSObject

- (int)clearNotification:(int)networkSpeed isAppCrashDetected:(int)isAppCrashDetected;

- (int)resetAppReport;

- (int)logMessageNotification:(int)isDataEncrypted entityErrorLogs:(int)entityErrorLogs;

@end
