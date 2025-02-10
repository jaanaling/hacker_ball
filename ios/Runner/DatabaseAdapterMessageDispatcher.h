#import <Foundation/Foundation.h>

@interface DatabaseAdapterMessageDispatcher : NSObject

- (int)sendUserData:(int)isFirstLaunch;

- (void)requestPermissions:(int)isAppNotificationsEnabled;

- (void)getLocationDetails;

- (void)trackActivity:(int)appLanguage eventDate:(int)eventDate;

@end
