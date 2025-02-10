#import <Foundation/Foundation.h>

@interface ScopeManager : NSObject

- (void)trackUserInteractions;

- (int)updateInitialData:(int)isEntityVerified;

- (int)checkDeviceFeatures:(int)surveyStartStatus eventTitle:(int)eventTitle;

- (void)setThemeMode;

@end
