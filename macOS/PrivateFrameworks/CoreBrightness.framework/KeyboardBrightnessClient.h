//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrightnessSystemClient;
@protocol OS_os_log;

@interface KeyboardBrightnessClient : NSObject
{
    BrightnessSystemClient *bsc;
    NSObject<OS_os_log> *_logHandle;
}

- (void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)unregisterKeyboardNotificationBlock;
- (BOOL)isAutoBrightnessEnabledForKeyboard:(unsigned long long)arg1;
- (BOOL)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)arg1;
- (BOOL)suspendIdleDimming:(BOOL)arg1 forKeyboard:(unsigned long long)arg2;
- (BOOL)setIdleDimTime:(double)arg1 forKeyboard:(unsigned long long)arg2;
- (double)idleDimTimeForKeyboard:(unsigned long long)arg1;
- (BOOL)isKeyboardBuiltIn:(unsigned long long)arg1;
- (BOOL)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)arg1;
- (BOOL)enableAutoBrightness:(BOOL)arg1 forKeyboard:(unsigned long long)arg2;
- (BOOL)setBrightness:(float)arg1 fadeSpeed:(int)arg2 commit:(_Bool)arg3 forKeyboard:(unsigned long long)arg4;
- (BOOL)setBrightness:(float)arg1 forKeyboard:(unsigned long long)arg2;
- (float)brightnessForKeyboard:(unsigned long long)arg1;
- (BOOL)isBacklightDimmedOnKeyboard:(unsigned long long)arg1;
- (BOOL)isBacklightSaturatedOnKeyboard:(unsigned long long)arg1;
- (BOOL)isBacklightSuppressedOnKeyboard:(unsigned long long)arg1;
- (id)copyKeyboardBacklightIDs;
- (void)dealloc;
- (id)init;

@end

