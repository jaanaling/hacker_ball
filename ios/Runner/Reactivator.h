#import <Foundation/Foundation.h>

@interface Reactivator : NSObject

- (int)sendEventWithParams:(int)selectedItemId isTutorialCompleted:(int)isTutorialCompleted;

- (int)filterContent:(int)isRecordingEnabled;

- (void)getSystemLanguage;

- (int)refreshContent:(int)surveyCompletionProgressStatusMessage;

@end
