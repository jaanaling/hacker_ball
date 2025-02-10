#import <Foundation/Foundation.h>

@interface DistributerPresenter : NSObject

- (void)clearActivityLog;

- (void)clearActivity;

- (void)loadDataFromCache:(int)entityLocationError;

@end
