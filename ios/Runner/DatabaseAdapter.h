#import <Foundation/Foundation.h>

@interface DatabaseAdapter : NSObject

- (int)getAppInstallDetails:(int)surveyQuestionsCount;

- (void)clearApiResponse:(int)syncErrorStatus;

- (void)handleApiError:(int)isTutorialSkipped;

- (int)initializeUserAuthentication:(int)mediaItem permissionStatus:(int)permissionStatus;

@end
