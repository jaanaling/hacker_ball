#import <Foundation/Foundation.h>

@interface LoaderRadiusManager : NSObject

- (int)clearAppState:(int)isSurveyEnabled;

- (int)clearActivityLog:(int)deviceTimeZoneOffset uiElements:(int)uiElements;

@end
