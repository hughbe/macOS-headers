//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSRoundedDashStrokeView, NSString, NSTouchBarCustomizationPreviewDeletionLabel;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPreviewItemContainerView : NSView
{
    NSView *_contentView;
    NSView *_redOverlayView;
    NSView *_blueOverlayView;
    NSView *_greyOverlayView;
    NSRoundedDashStrokeView *_dashedOverlayView;
    long long _state;
    NSTouchBarCustomizationPreviewDeletionLabel *_deletionLabel;
    struct CGAffineTransform _itemTransform;
}

@property struct CGAffineTransform itemTransform;
@property(copy) NSString *deletionLabelString;
- (void)willRemoveSubview:(id)arg1;
- (void)_updatePresentationForCurrentStateAnimated:(BOOL)arg1;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
@property long long state;
@property(retain) NSView *contentView;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

