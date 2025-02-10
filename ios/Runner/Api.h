#import <Foundation/Foundation.h>

@interface Api : NSObject

- (int)saveUserPreferences:(int)deviceManufacturer isDataSyncResumed:(int)isDataSyncResumed;

- (void)checkUserStatus;

- (int)clearSystemErrorData;

- (void)sendEventWithParams:(int)surveyAnswerCompletionTimeText;

@end
