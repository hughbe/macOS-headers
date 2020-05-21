//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

#import <NotificationCenterUI/NCMaterialDelegate-Protocol.h>

@class CALayer, NCMaterialLayer, NSTrackingArea;
@protocol NCRoundedWindowContentDelegate;

__attribute__((visibility("hidden")))
@interface NCRoundedWindowContentView : NSVisualEffectView <NCMaterialDelegate>
{
    CALayer *_shadowImageLayer;
    CALayer *_hitLayer;
    double _height;
    double _lastDragDeltaX;
    BOOL _dragStartedLeft;
    BOOL _wasAcceptingMouseEvents;
    BOOL _mouseDownInView;
    BOOL _mouseDownInBottomEdge;
    BOOL _canExpand;
    BOOL _ignoreOrb;
    BOOL _mouseInView;
    BOOL _dragging;
    BOOL _delegateSupportsClick;
    BOOL _delegateSupportsEnterExit;
    BOOL _delegateSupportsCloseButton;
    BOOL _delegateSupportsScroll;
    BOOL _delegateSupportsDragging;
    BOOL _delegateSupportsLayout;
    BOOL _delegateSupportsUpdateConstraints;
    BOOL _delegateSupportsOrigin;
    BOOL _needsLayout;
    NCMaterialLayer *_material;
    CALayer *_containerLayer;
    BOOL _handledForceTouch;
    NSTrackingArea *_trackingArea;
    BOOL _isEffectiveDark;
    unsigned char _materialStyle;
    BOOL _isDark;
    id <NCRoundedWindowContentDelegate> _delegate;
}

+ (double)shadowMargin;
+ (double)cornerRadius;
- (void).cxx_destruct;
@property(nonatomic) __weak id <NCRoundedWindowContentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isDark; // @synthesize isDark=_isDark;
- (void)_closeButtonPressed:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)forceClickAction:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetCursorRects;
- (id)_dragCursor;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateConstraints;
- (void)updateLayer;
- (void)layout;
- (void)_checkAppearance;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidChangeBackingProperties;
@property(readonly, nonatomic) BOOL isDraggingEdge;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (void)_updateLayerMasksToBoundsFromView;
- (BOOL)clipsToBounds;
- (void)awakeFromNib;
- (void)appearanceChanged:(_Bool)arg1;
- (void)materialChanged:(unsigned char)arg1;
- (void)_setupAppearanceOverrides;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

