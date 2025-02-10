#import <Foundation/Foundation.h>

@interface Screen : NSObject

- (void)logActivity:(int)isAppUpToDate;

- (void)getUserSessionDetails:(int)entityLocationCoordinates locationServiceStatus:(int)locationServiceStatus;

- (void)setAppErrorData;

@end
