#import <Foundation/Foundation.h>

@interface FacilitatorApp : NSObject

- (int)setScreenSize:(int)favoriteItems backgroundColor:(int)backgroundColor;

- (void)installUpdate:(int)surveyCompletionStatus itemFile:(int)itemFile;

- (void)getInteractionDetails;

- (void)getProgressStatus;

@end
