#import <Foundation/Foundation.h>

@interface EngineConstantsManager : NSObject

- (int)clearInstallDetails;

- (void)setApiResponse;

- (void)clearAppActivityData:(int)entityAgreementStatus isProcessing:(int)isProcessing;

@end
