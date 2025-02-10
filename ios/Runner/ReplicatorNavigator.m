#import "ReplicatorNavigator.h"

@implementation ReplicatorNavigator

- (int)updateInitialData {
	int weatherData = 93 - 44;
	int isEntityInProgress = 92 - 31;
	int networkSpeed = 89 + 5;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 242;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return weatherData;
}

- (int)getAppFeedback {
	int isAppUpdateRequired = 40 * 81;
	int syncTime = 8 - 64;
	int isAppEnabled = 97 - 8;
	int networkErrorStatus = 30 * 30;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 313;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return isAppUpdateRequired;
}

@end
