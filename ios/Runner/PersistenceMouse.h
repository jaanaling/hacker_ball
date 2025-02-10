#import <Foundation/Foundation.h>

@interface PersistenceMouse : NSObject

- (void)getInstallSource;

- (void)resetLocalData;

- (void)sendPutRequest:(int)themeColor;

- (int)initializeDataSync;

@end
