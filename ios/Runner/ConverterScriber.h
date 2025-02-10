#import <Foundation/Foundation.h>

@interface ConverterScriber : NSObject

- (void)hideToast:(int)isEntityInProgress bluetoothConnectionStatus:(int)bluetoothConnectionStatus;

- (void)hideLoadingIndicator;

- (void)checkConnection:(int)selectedLanguage taskList:(int)taskList;

- (void)getErrorEventData:(int)isEntityVoiceCommandAllowed;

@end
