#import <Foundation/Foundation.h>

@interface Incorporator : NSObject

- (int)resetProgressStatus;

- (int)checkSMSStatus:(int)syncStatus feedbackType:(int)feedbackType;

@end
