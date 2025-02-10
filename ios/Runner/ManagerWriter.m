#import "ManagerWriter.h"

@implementation ManagerWriter

- (void)resetSensorData:(int)deviceBatteryStatus {
	int surveyCompletionReviewMessageTimeText = 24 - 27;
	int mediaTitle = 30 * 72;
	int taskList = 21 - 15;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 966;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

- (int)setAppLaunchStats:(int)isDataEncrypted {
	int taskCompletionStatus = 83 * 21;
	int itemDuration = 17 + 15;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	return taskCompletionStatus;
}

@end
