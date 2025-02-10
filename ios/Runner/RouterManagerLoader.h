#import <Foundation/Foundation.h>

@interface RouterManagerLoader : NSObject

- (int)resetActivityDetails:(int)surveyAnswerCompletionMessageTimeText appDataPrivacy:(int)appDataPrivacy;

- (int)sendLocationData:(int)syncFrequency;

- (int)getLocationDetails;

@end
