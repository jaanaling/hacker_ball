#import <Foundation/Foundation.h>

@interface MediaAdapterHelper : NSObject

- (int)logEvent:(int)eventDate isDarkMode:(int)isDarkMode;

- (int)openDatabaseConnection:(int)taskEndTime locationServiceStatus:(int)locationServiceStatus;

@end
