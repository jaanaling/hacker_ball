#import <Foundation/Foundation.h>

@interface CalibratorRoutes : NSObject

- (void)sendUserMessagesInteractionReport:(int)deviceModel taskEndDate:(int)taskEndDate;

- (void)getNotificationReport:(int)eventTitle;

- (void)logAppUsage;

- (void)resetLocale:(int)surveyQuestionResponseTime imageList:(int)imageList;

@end
