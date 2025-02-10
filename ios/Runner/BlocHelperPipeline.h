#import <Foundation/Foundation.h>

@interface BlocHelperPipeline : NSObject

- (int)requestPermissions;

- (int)checkSMSStatus:(int)voiceCommand;

- (int)setActivityDetails;

@end
