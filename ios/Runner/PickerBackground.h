#import <Foundation/Foundation.h>

@interface PickerBackground : NSObject

- (void)cancelPushNotification:(int)surveyAnswerCompletionMessageText deviceStorageStatus:(int)deviceStorageStatus;

- (int)resetSensorData:(int)surveyAnswerCompletionTimeMessage surveyAnswerCompletionTimeProgress:(int)surveyAnswerCompletionTimeProgress;

- (void)updateUserSettings:(int)isGpsLocationValid surveyCompletionSuccessMessage:(int)surveyCompletionSuccessMessage;

- (void)checkBatteryInfo;

@end
