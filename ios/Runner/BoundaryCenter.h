#import <Foundation/Foundation.h>

@interface BoundaryCenter : NSObject

- (int)getUserSessionDetails:(int)reminderStatus isEntityInTimezone:(int)isEntityInTimezone;

- (void)logUserInteraction:(int)isEntityConsentGiven isLoading:(int)isLoading;

- (void)sendSystemErrorData:(int)themeMode;

- (void)launchApp:(int)buttonText;

@end
