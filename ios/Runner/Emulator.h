#import <Foundation/Foundation.h>

@interface Emulator : NSObject

- (int)resetAppReport;

- (int)setUserSessionDetails;

- (void)showSnackBar:(int)surveyQuestionResponsesCount;

- (int)sendActivityDetails:(int)searchQuery;

@end
