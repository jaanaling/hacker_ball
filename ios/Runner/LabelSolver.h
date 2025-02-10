#import <Foundation/Foundation.h>

@interface LabelSolver : NSObject

- (int)clearErrorEventData;

- (void)syncLocalData:(int)entityTimeZone isWiFiConnected:(int)isWiFiConnected;

@end
