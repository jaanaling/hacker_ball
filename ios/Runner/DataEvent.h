#import <Foundation/Foundation.h>

@interface DataEvent : NSObject

- (void)queryDatabase:(int)lastActionTimestamp isAppInStartupState:(int)isAppInStartupState;

- (int)getUserProgress:(int)entityHasBio syncTime:(int)syncTime;

- (void)setInitialData:(int)weatherCondition selectedItem:(int)selectedItem;

- (int)sendUserMessageData:(int)feedbackResponse;

@end
