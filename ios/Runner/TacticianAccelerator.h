#import <Foundation/Foundation.h>

@interface TacticianAccelerator : NSObject

- (int)updateNetworkStatus:(int)dataSyncStatus gpsLocationStatus:(int)gpsLocationStatus;

- (int)sendButtonClickData:(int)surveyEndDate isGpsSignalAvailable:(int)isGpsSignalAvailable;

- (int)resetProgressStatus:(int)mediaTitle;

@end
