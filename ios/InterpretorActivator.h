#import <Foundation/Foundation.h>
@interface InterpretorActivator : NSObject
- (void)fetchApiResponse;
- (int)clearScreenVisitStats;
- (void)getUserStatus;
- (void)displayLoadingIndicator:(bluetoothConnectionStatus)int;
- (int)resetUserStatus:(appFeature)int int:(isTutorialCompleted)int;
- (int)getAppSettings;
- (void)parseJsonError:(surveyCompletionDeadline)int int:(isAppSoundEnabled)int;
- (void)getLocale:(uiElements)int;
- (void)clearUserVisitStats:(errorCode)int;
- (int)setUserLocation;
- (int)storeDataInCache:(isEntityOnline)int int:(deviceInformation)int;
- (int)restoreAppState:(isSyncing)int;
- (int)cancelNotification:(fileTransferDuration)int int:(isDataLoaded)int;
- (int)getActivityLog:(uploadError)int;
@end