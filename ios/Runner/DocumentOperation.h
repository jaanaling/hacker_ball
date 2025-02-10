#import <Foundation/Foundation.h>

@interface DocumentOperation : NSObject

- (int)updateAppProgress:(int)isEntityConsentGiven;

- (void)sendCrashReport;

@end
