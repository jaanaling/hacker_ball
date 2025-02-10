#import <Foundation/Foundation.h>

@interface BoundarySearch : NSObject

- (void)cancelAlarm:(int)surveyCompletionTime eventLocation:(int)eventLocation;

- (void)getProgressReport;

- (void)updateProgressStatus;

- (void)checkBatteryLevel;

@end
