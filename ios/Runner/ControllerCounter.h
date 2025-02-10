#import <Foundation/Foundation.h>

@interface ControllerCounter : NSObject

- (int)requestLocationUpdate:(int)deviceConnectivityStatus;

- (int)getSMSStatus:(int)temperatureUnit;

- (int)initializeNotificationTracking;

- (int)getAnalyticsData:(int)surveyQuestionAnswerCount;

@end
