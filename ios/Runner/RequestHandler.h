#import <Foundation/Foundation.h>

@interface RequestHandler : NSObject

- (int)fetchUserSettings;

- (int)setInstallTime:(int)isAppRunningInBackground surveyCompletionFailureStatus:(int)surveyCompletionFailureStatus;

@end
