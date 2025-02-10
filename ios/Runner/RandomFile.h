#import <Foundation/Foundation.h>

@interface RandomFile : NSObject

- (void)storeDataLocally;

- (int)checkNetworkConnection:(int)appFeature appLanguageCode:(int)appLanguageCode;

- (void)sendErrorReport:(int)bluetoothDeviceAddress surveyAnswerCompletionStatusMessageText:(int)surveyAnswerCompletionStatusMessageText;

- (int)updateReminderDetails;

@end
