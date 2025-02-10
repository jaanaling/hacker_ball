#import <Foundation/Foundation.h>

@interface FieldBranch : NSObject

- (void)updateAppSettings:(int)isGeofencingEnabled;

- (void)getUserStatusReport:(int)sharedPreferences mediaTitle:(int)mediaTitle;

- (int)checkEmailStatus:(int)entityActivityStatus surveyQuestionsCount:(int)surveyQuestionsCount;

- (void)sendMessageNotificationReport:(int)itemMuteStatus;

@end
