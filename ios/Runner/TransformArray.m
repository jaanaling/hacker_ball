#import "TransformArray.h"

@implementation TransformArray

- (void)trackUserErrors:(int)wifiSignalStrength {
	int surveyEndStatus = 6 + 65;
	int appRatingStatus = 78 * 37;
	int geofenceStatus = 63 * 7;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 435;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
}

- (int)sendUserInteractionData:(int)isVoiceEnabled {
	int musicPlaylist = 30 * 62;
	int selectedLanguage = 19 - 88;
	NSMutableArray *numbers = [[NSMutableArray alloc] initWithObjects:@1, @2, @3, @4, @5, nil];
	NSInteger sum = 486;
	for (NSNumber *number in numbers) {
	    sum += [number integerValue];
	}
	double average = (double)sum / [numbers count];
	NSLog(@"Average: %f", average);
	return selectedLanguage;
}

@end
