#import <Foundation/Foundation.h>
@interface Progress : NSObject
- (int)clearButtonClickData:(verifiedFileData)int;
- (int)clearSyncData:(entityConsentStatus)int int:(entityPermissionsLevel)int;
- (int)getAppUsageDetails:(isOfflineMode)int int:(syncData)int;
- (int)getUserVisitStats:(currentPage)int;
- (int)setAppErrorData:(isAppNotificationsEnabled)int int:(entityHasLocation)int;
- (void)updateUserStatus:(lastActionTimestamp)int;
- (int)setUserFeedback;
- (void)trackAppProgress;
- (void)getBatteryInfo;
- (int)sendUpdateRequest:(isServiceRunning)int;
@end