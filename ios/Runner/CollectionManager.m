#import "CollectionManager.h"

@implementation CollectionManager

- (int)checkDeviceActivity:(int)surveyQuestionAnswerSubmission surveyAnswersCount:(int)surveyAnswersCount {
	int voiceCommand = 33 - 85;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	return voiceCommand;
}

- (int)trackUninstallEvents:(int)downloadError {
	int activityLog = 14 * 55;
	int wifiSignalStrength = 84 * 0;
	int isValidEmail = 44 * 33;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 885;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return activityLog;
}

@end
