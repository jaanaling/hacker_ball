#import <Foundation/Foundation.h>

@interface Rewriter : NSObject

- (void)getUserVisitStats:(int)currentStep wifiStrength:(int)wifiStrength;

- (void)setReminder:(int)surveyAnswerDuration;

- (int)getCrashReports:(int)isConnected taskCompleted:(int)taskCompleted;

- (void)clearUserInteractionData:(int)syncTaskStatus isEntityOnline:(int)isEntityOnline;

@end
