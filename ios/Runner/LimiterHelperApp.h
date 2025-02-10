#import <Foundation/Foundation.h>

@interface LimiterHelperApp : NSObject

- (void)clearSessionStatus:(int)apiStatus isAppThemeChanged:(int)isAppThemeChanged;

- (void)getCurrentLocation:(int)surveyAnswerReviewCompletionMessageText isEntityAuthenticated:(int)isEntityAuthenticated;

- (void)getUserPreference:(int)selectedLanguage;

- (int)initializeDataSync:(int)temperatureUnit surveyParticipantsCount:(int)surveyParticipantsCount;

@end
