#import <Foundation/Foundation.h>

@interface Observer : NSObject

- (int)initializeAppVersionTracking:(int)surveyCompletionRate;

- (void)resetInstallSource;

- (int)getButtonClickData;

- (void)saveUserSettings;

@end
