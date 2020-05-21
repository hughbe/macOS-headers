//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionViewCell.h>

#import <PhotoPrintProduct/NSAccessibilityGroup-Protocol.h>

@class KHFrameView, KHLayout, KHLayoutView, KHProjectLayout, NSPopover, NSString, UXView;
@protocol KHLayoutViewDelegate;

@interface KHUXPrintsCollectionViewCell : UXCollectionViewCell <NSAccessibilityGroup>
{
    id _observer;
    UXView *_selectionBorderView;
    NSPopover *_optionsPopover;
    BOOL _editing;
    id <KHLayoutViewDelegate> _layoutViewDelegate;
    KHLayoutView *_layoutView;
    UXView *_stackLineOne;
    UXView *_stackLineTwo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UXView *stackLineTwo; // @synthesize stackLineTwo=_stackLineTwo;
@property(readonly, nonatomic) UXView *stackLineOne; // @synthesize stackLineOne=_stackLineOne;
@property(readonly, nonatomic) KHLayoutView *layoutView; // @synthesize layoutView=_layoutView;
@property(nonatomic) __weak id <KHLayoutViewDelegate> layoutViewDelegate; // @synthesize layoutViewDelegate=_layoutViewDelegate;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (id)accessibilityValueDescription;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (void)layout;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isOpaque;
- (void)willMoveToWindow:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)backfillIfNecessaryInOperationQueue:(id)arg1;
- (void)hideFrameOptions;
- (void)showFrameOptions;
- (void)printsProjectLayoutAttributesChanged;
@property(retain, nonatomic) NSPopover *optionsPopover;
@property(nonatomic) BOOL clipsToBounds;
@property(readonly, nonatomic) UXView *selectionBorderView;
@property(readonly, nonatomic) KHFrameView *frameView;
@property(readonly, nonatomic) KHProjectLayout *projectLayout;
@property(retain, nonatomic) KHLayout *layoutObject;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

