#import <Foundation/Foundation.h>

@interface Snackbar : NSObject

- (int)getProgressStatus:(int)systemErrorLogs;

- (void)sendMessageNotificationData:(int)isDataSynced syncErrorStatus:(int)syncErrorStatus;

- (int)syncLocalData;

@end
