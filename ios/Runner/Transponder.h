#import <Foundation/Foundation.h>

@interface Transponder : NSObject

- (int)getInstallStats;

- (void)resetInstallSource;

- (void)updateExternalData:(int)temperatureUnit;

- (int)authenticateUser:(int)entityLocationSpeed isSyncInProgress:(int)isSyncInProgress;

@end
