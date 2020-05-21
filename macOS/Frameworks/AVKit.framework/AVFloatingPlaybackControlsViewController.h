//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPlayerControlsViewController.h>

#import <AVKit/NSStackViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSStackView, NSString, NSView;

__attribute__((visibility("hidden")))
@interface AVFloatingPlaybackControlsViewController : AVPlayerControlsViewController <NSStackViewDelegate>
{
    BOOL _viewDidLoad;
    NSView *_initialFirstResponder;
    CDUnknownBlockType _nextKeyViewSetupBlock;
    NSStackView *_playbackControlsContainerStackView;
    NSStackView *_upperContainerStackView;
    NSLayoutConstraint *_upperContainerStackViewMinimumWidthConstraint;
    BOOL _needsUpdateUpperContainerStackViewMinimumWidth;
    NSView *_auxiliaryControlsStackViewContainerView;
    NSStackView *_auxiliaryControlsStackView;
    NSLayoutConstraint *_auxiliaryControlsStackViewWidthConstraint;
}

+ (id)keyPathsForValuesAffectingIntrinsicControlsContentViewSize;
- (void).cxx_destruct;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (void)stackView:(id)arg1 willDetachViews:(id)arg2;
- (void)_updateUpperContainerStackViewMinimumWidth;
- (void)_updateUpperContainerStackViewMinimumWidthIfNeeded;
- (void)_setNeedsUpdateUpperContainerStackViewMinimumWidth;
- (void)_updateAuxiliaryControlsStackViewWidthAndSpacingForDetachedAuxiliaryViews:(id)arg1;
- (id)_sortAuxiliaryControlsByVisbilityPriority:(id)arg1;
- (void)_setupAuxiliaryControlsStackView;
- (void)viewWillLayout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initialFirstResponder;
- (BOOL)movableControlsContentView;
- (CDStruct_83cd8af5)controlsContentViewMargin;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)controlsStyleIdentifier;
- (void)setupNextKeyView;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

