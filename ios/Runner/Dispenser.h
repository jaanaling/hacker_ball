#import <Foundation/Foundation.h>

@interface Dispenser : NSObject

- (void)sendErrorEventData:(int)adminPermissionsStatus entityPreferredLanguage:(int)entityPreferredLanguage;

- (void)getAppInfo:(int)itemCount;

- (int)setCrashHandler:(int)surveyAnswerStatus;

@end
