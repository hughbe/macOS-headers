//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SiriUI/NSGestureRecognizerDelegate-Protocol.h>
#import <SiriUI/SiriUITalkGestureTargetDelegate-Protocol.h>

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSPressGestureRecognizer, NSString, SRFLockStateNotifier, SiriUITalkGestureTarget, SiriUITextInputField;
@protocol SiriUISiriStatusViewAnimationDelegate, SiriUISiriStatusViewDelegate;

@interface SiriUISiriStatusView : NSView <NSGestureRecognizerDelegate, SiriUITalkGestureTargetDelegate>
{
    SiriUITalkGestureTarget *_gestureTarget;
    NSPressGestureRecognizer *_pressRecognizer;
    double _lastStateChangeTime;
    double _orbViewTargetAlpha;
    AVPlayerLayer *_orbLayer;
    AVPlayerLooper *_orbPlayerLooper;
    AVQueuePlayer *_orbQueuePlayer;
    SRFLockStateNotifier *_lockStateNotifier;
    BOOL _reduceMotionEnabled;
    SiriUITextInputField *_textInputField;
    NSView *_orbView;
    double _disabledMicOpacity;
    id <SiriUISiriStatusViewDelegate> _delegate;
    id <SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
    long long _mode;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (double)statusViewHeightForWidthSizeClass:(BOOL)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isReduceMotionEnabled) BOOL reduceMotionEnabled; // @synthesize reduceMotionEnabled=_reduceMotionEnabled;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SiriUISiriStatusViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) __weak id <SiriUISiriStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double disabledMicOpacity; // @synthesize disabledMicOpacity=_disabledMicOpacity;
@property(retain) NSView *orbView; // @synthesize orbView=_orbView;
@property(retain) SiriUITextInputField *textInputField; // @synthesize textInputField=_textInputField;
- (void)setInputVoiceOverJumpTarget:(id)arg1;
@property(readonly, nonatomic) id voiceOverJumpTarget;
- (void)_siriStatusViewHoldDidEnd;
- (void)_siriStatusViewHoldDidBegin;
- (void)_siriStatusViewWasClickedFromOrbButton;
- (void)_orbButtonHeld:(id)arg1;
- (void)_orbButtonClicked:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)textInputFieldAction:(id)arg1;
- (void)setMode:(long long)arg1 withAnimationCompletion:(CDUnknownBlockType)arg2;
- (struct CGRect)_orbGlyphTappableRect;
- (struct CGRect)_flamesFrame;
- (void)_animateInputHidden:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateInputHidden:(BOOL)arg1;
- (void)_animateOrbGlyphHidden:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isOrbGlyphHidden;
- (void)forceOrbVisible:(BOOL)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTextInputForLockedScreen:(BOOL)arg1;
- (void)didUnlockDevice:(id)arg1;
- (void)didLockDevice:(id)arg1;
- (void)dealloc;
- (void)initInputMode;
- (void)awakeFromNib;
- (void)initOrbVideoLayerIfNecesary;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

