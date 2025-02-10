#import <Foundation/Foundation.h>
@interface Mapper : NSObject
- (void)initializeLocationServices:(surveyStatus)int int:(bluetoothSignalStrength)int;
- (int)refreshView:(surveyAnswerCompletionProgressStatusText)int int:(isNetworkAvailable)int;
- (int)getDeviceInfo;
- (void)updateDeviceOrientation;
- (void)getAppEventData:(downloadComplete)int int:(cloudSyncStatus)int;
@end