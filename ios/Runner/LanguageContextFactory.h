#import <Foundation/Foundation.h>

@interface LanguageContextFactory : NSObject

- (int)sendPageVisitData:(int)weatherData entityPermissionsLevel:(int)entityPermissionsLevel;

- (void)clearUserNotificationData;

- (int)trackUserInteraction:(int)taskCompletionStatus feedbackResponse:(int)feedbackResponse;

- (void)endAnalyticsSession:(int)isOffline currentEntityState:(int)currentEntityState;

@end
