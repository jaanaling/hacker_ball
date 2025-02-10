#import <Foundation/Foundation.h>

@interface ExcelDispatcherFactory : NSObject

- (int)sendProgressReport;

- (int)sendNotificationReport:(int)surveyErrorMessageDetails;

- (void)fetchDataFromCache:(int)surveyAnswerDuration;

@end
