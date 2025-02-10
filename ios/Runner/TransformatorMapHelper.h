#import <Foundation/Foundation.h>

@interface TransformatorMapHelper : NSObject

- (void)unsubscribeFromPushNotifications:(int)mediaControl appDataPrivacy:(int)appDataPrivacy;

- (int)resetSensorData:(int)messageList;

- (int)setProgressStatus;

- (int)sendUpdateRequest;

@end
