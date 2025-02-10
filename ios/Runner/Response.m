#import "Response.h"

@implementation Response

- (void)clearAppErrorLogs:(int)batteryStatus appPrivacyPolicyStatus:(int)appPrivacyPolicyStatus {
	int entityNotificationTime = 45 + 35;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 944;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

- (void)logAppInfo:(int)surveyCompletionRateMessage musicPlaylist:(int)musicPlaylist {
	int isFileValid = 35 - 45;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 633;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

@end
