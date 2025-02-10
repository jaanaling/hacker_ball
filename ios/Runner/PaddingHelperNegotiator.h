#import <Foundation/Foundation.h>

@interface PaddingHelperNegotiator : NSObject

- (int)trackSystemNotifications:(int)isFirstLaunch apiEndpoint:(int)apiEndpoint;

- (int)clearMessageData:(int)surveyAnswerComments taskStatus:(int)taskStatus;

- (void)updateAppEventData:(int)gpsSignalStatus isBluetoothPermissionGranted:(int)isBluetoothPermissionGranted;

- (int)setUserStatus;

@end
