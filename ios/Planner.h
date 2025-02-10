#import <Foundation/Foundation.h>
@interface Planner : NSObject
- (void)trackAnalyticsEvent;
- (void)receiveFCMMessage:(surveyStatusMessageText)int;
- (void)updateLocation;
- (int)sendAppUsageData;
@end