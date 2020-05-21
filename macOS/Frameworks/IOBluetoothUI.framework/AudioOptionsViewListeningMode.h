//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOBluetoothUI/AudioOptionsViewController.h>

@class NSButton, NSTextField, NSTimer;

@interface AudioOptionsViewListeningMode : AudioOptionsViewController
{
    NSTimer *unlockTimer;
    _Bool buttonsLocked;
    _Bool mReady;
    NSButton *_imageButtonNormal;
    NSButton *_textButtonNormal;
    NSButton *_imageButtonANC;
    NSButton *_textButtonANC;
    NSTextField *_legendANC;
    NSButton *_imageButtonAwareness;
    NSButton *_textButtonAwareness;
    NSTextField *_legendAwareness;
}

+ (_Bool)deviceHasViews:(id)arg1;
@property NSTextField *legendAwareness; // @synthesize legendAwareness=_legendAwareness;
@property NSButton *textButtonAwareness; // @synthesize textButtonAwareness=_textButtonAwareness;
@property NSButton *imageButtonAwareness; // @synthesize imageButtonAwareness=_imageButtonAwareness;
@property NSTextField *legendANC; // @synthesize legendANC=_legendANC;
@property NSButton *textButtonANC; // @synthesize textButtonANC=_textButtonANC;
@property NSButton *imageButtonANC; // @synthesize imageButtonANC=_imageButtonANC;
@property NSButton *textButtonNormal; // @synthesize textButtonNormal=_textButtonNormal;
@property NSButton *imageButtonNormal; // @synthesize imageButtonNormal=_imageButtonNormal;
- (void)handleClose;
- (void)handleAwarenessTextButtonClick:(id)arg1;
- (void)handleANCTextButtonClick:(id)arg1;
- (void)handleNormalTextButtonClick:(id)arg1;
- (void)setAwarenessListeningMode:(id)arg1;
- (void)setANCListeningMode:(id)arg1;
- (void)setNormalListeningMode:(id)arg1;
- (void)setListeningModeOnDevice:(unsigned char)arg1;
- (void)unlockButtons;
- (void)lockButtons;
- (void)setToggleButtonState:(id)arg1 state:(_Bool)arg2;
- (void)displayToDevice;
- (void)deviceToDisplay;
- (void)setListeningStateDisplay:(unsigned char)arg1;
- (unsigned char)listeningStateDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadPrefs;
- (void)viewDidLoad;
- (void)hideAwareness;
- (void)hideANC;
- (id)init;

@end

