#import <Foundation/Foundation.h>

@interface BlocHelperCenter : NSObject

- (int)getNotificationReport:(int)entityTimeZoneOffset;

- (void)updateLocale;

- (int)sendSystemNotificationReport;

@end
