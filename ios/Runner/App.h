#import <Foundation/Foundation.h>

@interface App : NSObject

- (int)updateExternalData:(int)mediaStatus;

- (int)setTime:(int)surveyCompletionStatusTime isEntityInProgress:(int)isEntityInProgress;

- (int)getUserErrorData:(int)isEntityLoggedIn syncTaskStatus:(int)syncTaskStatus;

@end
