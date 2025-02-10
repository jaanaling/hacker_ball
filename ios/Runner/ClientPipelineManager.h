#import <Foundation/Foundation.h>

@interface ClientPipelineManager : NSObject

- (int)getUserActivity:(int)appTheme;

- (int)handleHttpError:(int)surveyParticipantsCount surveyAnswersCount:(int)surveyAnswersCount;

@end
