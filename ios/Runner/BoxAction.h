#import <Foundation/Foundation.h>

@interface BoxAction : NSObject

- (void)openDatabaseConnection;

- (int)sendMessageClickData:(int)batteryLevel surveyCommentsCount:(int)surveyCommentsCount;

@end
