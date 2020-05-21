//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKAbstractInputMethod.h>

@class IMKKey, IMKKeyboardState, NSString;

@interface IMKMultitapInputMethod : IMKAbstractInputMethod
{
    IMKKey *_multitapKey;
    IMKKeyboardState *_multitapKeyboardState;
    NSString *_multitapCharacter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *multitapCharacter; // @synthesize multitapCharacter=_multitapCharacter;
@property(retain, nonatomic) IMKKeyboardState *multitapKeyboardState; // @synthesize multitapKeyboardState=_multitapKeyboardState;
@property(retain, nonatomic) IMKKey *multitapKey; // @synthesize multitapKey=_multitapKey;
- (void)_resetCommitMultitapDelay;
- (void)_commitMultitap;
- (void)_updateMultitap;
- (void)_startMultitap:(id)arg1 whileInKeyboardState:(id)arg2;
- (BOOL)handleKeyRelease:(id)arg1 whileInKeyboardState:(id)arg2;
- (BOOL)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2;
@property(readonly, nonatomic, getter=isMultitapping) BOOL multitapping;

@end

