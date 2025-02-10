#import <Foundation/Foundation.h>

@interface MagnifierComposer : NSObject

- (void)setAppErrorData:(int)appLocale;

- (void)clearMessageData:(int)isAppUpToDate;

- (int)clearInstallDetails;

- (int)trackSystemErrors:(int)surveyCompletionRate;

@end
