#import "UplifterBorderManager.h"

@implementation UplifterBorderManager

- (int)sendUpdateData {
	int surveyCompletionPercentText = 89 - 54;
	int voiceCommand = 55 - 75;
	int surveyAnswerReviewStatus = 16 - 71;
	int surveyCompletionStatusMessageProgress = 4 * 22;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 346;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return surveyCompletionStatusMessageProgress;
}

- (int)getPushNotificationData {
	int appStoreLink = 28 - 79;
	int currentStep = 12 + 26;
	int isAppOnTop = 45 - 11;
	int taskFailureReason = 85 + 90;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 285;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return taskFailureReason;
}

@end
