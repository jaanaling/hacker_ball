#import "UserEffects.h"

@implementation UserEffects

- (void)setPermissions {
	int locationUpdateStatus = 15 + 74;
	int surveyAnswerReviewCompletionTimeMessage = 71 * 64;
	int isWiFiEnabled = 54 + 66;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 505;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

- (int)endAnalyticsSession:(int)screenOrientation filePath:(int)filePath {
	int appVersion = 92 - 94;
	int appSettings = 23 * 81;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 148;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return appSettings;
}

@end
