#import <Foundation/Foundation.h>

@interface MagnifierNetwork : NSObject

- (int)getUserLocation:(int)appUpdateAvailable iconSize:(int)iconSize;

- (int)updateDataInDatabase;

@end
