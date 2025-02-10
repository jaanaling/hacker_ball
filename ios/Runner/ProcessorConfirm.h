#import <Foundation/Foundation.h>

@interface ProcessorConfirm : NSObject

- (int)trackUserInteraction:(int)reportStatus deviceOS:(int)deviceOS;

- (void)getThemeMode;

- (int)sendAppStatusReport;

@end
