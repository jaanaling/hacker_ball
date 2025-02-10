#import "Protocol.h"

@implementation Protocol
- (void)saveUsageStats:(int)int int:(int)int{
	int errorDetails = int - 126;
	for (int i = 1; i <= 10; i++) {
	        NSLog(@"Res: %d", i);
	    }
	NSMutableArray *largeArray = [NSMutableArray array];
	    for (int i = 0; i < 380; i++) {
	        [largeArray addObject:@(arc4random_uniform(243))];
	    }
	    [largeArray sortUsingComparator:^NSComparisonResult(NSNumber *num1, NSNumber *num2) {
	        return [num1 compare:num2];
	    }];
}

@end