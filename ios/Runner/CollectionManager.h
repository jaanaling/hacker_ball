#import <Foundation/Foundation.h>

@interface CollectionManager : NSObject

- (int)checkDeviceActivity:(int)surveyQuestionAnswerSubmission surveyAnswersCount:(int)surveyAnswersCount;

- (int)trackUninstallEvents:(int)downloadError;

@end
