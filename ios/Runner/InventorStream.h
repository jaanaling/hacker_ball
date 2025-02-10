#import <Foundation/Foundation.h>

@interface InventorStream : NSObject

- (int)sendActivityDetails:(int)isWiFiConnected mediaTitle:(int)mediaTitle;

- (void)retrieveDataFromServer:(int)surveyCompletionSuccessStatusMessage;

- (int)clearAppCache:(int)locationServiceStatus appUpgradeStatus:(int)appUpgradeStatus;

- (int)receiveFCMMessage;

@end
