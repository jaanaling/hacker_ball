#import <Foundation/Foundation.h>

@interface PdfRow : NSObject

- (int)saveState:(int)applicationState;

- (int)clearImageCache:(int)downloadedFiles;

- (int)requestLocationUpdate:(int)isEntityLoggedOut;

@end
