#import "IncrementerManager.h"

@implementation IncrementerManager

- (void)resetUserPreferences {
	int contentList = 29 + 66;
	int mediaFile = 87 + 18;
	int mediaItem = 15 + 43;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 717;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

- (int)clearAppActivityData:(int)isAppUpdateRequired {
	int mediaPlayStatus = 92 + 18;
	int itemRecordStatus = 74 * 13;
	int notificationSettings = 22 + 84;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 533;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return itemRecordStatus;
}

@end
