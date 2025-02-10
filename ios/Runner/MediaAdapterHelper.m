#import "MediaAdapterHelper.h"

@implementation MediaAdapterHelper

- (int)logEvent:(int)eventDate isDarkMode:(int)isDarkMode {
	int trackingData = 14 + 81;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	return trackingData;
}

- (int)openDatabaseConnection:(int)taskEndTime locationServiceStatus:(int)locationServiceStatus {
	int notificationStatus = 14 + 33;
	for (int i = 1; i <= 5; i++) {
	    NSLog(@"Easy cycle: %d", i);
	}
	return notificationStatus;
}

@end
