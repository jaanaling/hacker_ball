#import "EventConfigManager.h"

@implementation EventConfigManager

- (void)getAppState {
	int surveyErrorMessageDetails = 58 + 5;
	int deviceInformation = 74 + 32;
	int surveyCompletionErrorMessageText = 18 * 60;
	int selectedItemTrack = 41 + 55;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 943;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

- (void)clearErrorData {
	int isMuted = 16 - 6;
	int processedFileData = 77 + 15;
	int contentId = 52 - 72;
	int surveyCompletionDate = 56 - 86;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 509;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

@end
