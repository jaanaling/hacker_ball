#import <Foundation/Foundation.h>

@interface NarratorRepositoryManager : NSObject

- (int)checkAppState:(int)isServiceRunning;

- (int)initializeFirebaseMessaging:(int)surveyFeedbackCount appStateChange:(int)appStateChange;

@end
