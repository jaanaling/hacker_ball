#import <Foundation/Foundation.h>
@interface ExcelTable : NSObject
- (void)getDeviceInfo:(surveySubmissionStatus)int;
- (int)fetchUserSettings:(appRatingStatus)int int:(surveyResponsesReviewed)int;
- (void)handleApiError;
- (void)checkUserAuthentication;
- (void)initializeLocationServices:(loginErrorMessage)int;
@end