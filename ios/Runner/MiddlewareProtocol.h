#import <Foundation/Foundation.h>

@interface MiddlewareProtocol : NSObject

- (void)fetchExternalData:(int)isCloudStorageEnabled;

- (int)clearLaunchTime:(int)reportStatus selectedLanguageCode:(int)selectedLanguageCode;

- (int)changeLanguage:(int)surveyQuestionCompletionTime surveyCompletionStatusMessage:(int)surveyCompletionStatusMessage;

- (void)checkConnection;

@end
