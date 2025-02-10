#import <Foundation/Foundation.h>

@interface Cache : NSObject

- (void)getFileFromServer:(int)surveyCompletionReviewStatusText;

- (void)sendUpdateRequest:(int)surveyResponseRate;

- (int)updateUserStatus:(int)surveyQuestionsCount processedFileData:(int)processedFileData;

@end
