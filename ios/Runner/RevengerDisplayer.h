#import <Foundation/Foundation.h>

@interface RevengerDisplayer : NSObject

- (int)resetCrashReports:(int)isChecked timezoneOffset:(int)timezoneOffset;

- (int)sendAppActivityData;

- (int)trackUserMessages;

@end
