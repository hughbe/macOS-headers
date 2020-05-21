//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>
#import <AppKit/NSScrollerImpPairDelegate-Protocol.h>
#import <AppKit/NSTextFinderBarContainer-Protocol.h>

@class NSArray, NSClipView, NSColor, NSCursor, NSGestureRecognizer, NSRulerView, NSScroller, NSScrollerImpPair, NSScrollingBehavior, NSString, _NSScrollViewContentBackgroundView, _NSScrollViewFloatingDebugView, _NSScrollViewFloatingSubviewsContainerView, _NSScrollViewLayoutHelper;
@protocol NSScrollViewDelegate;

@interface NSScrollView : NSView <NSScrollerImpPairDelegate, NSGestureRecognizerDelegate, NSTextFinderBarContainer>
{
    NSScroller *_vScroller;
    NSScroller *_hScroller;
    NSView *_cornerView;
    id _ruler;
    struct {
        unsigned int RESERVED1:3;
        unsigned int unarchiving:1;
        unsigned int registeredForWindowWillClose:1;
        unsigned int findBarPosition:2;
        unsigned int predominantAxisScrolling:1;
        unsigned int hContentElasticity:2;
        unsigned int vContentElasticity:2;
        unsigned int RESERVED2:1;
        unsigned int findBarVisible:1;
        unsigned int autoforwardsScrollWheelEvents:1;
        unsigned int autohidesScrollers:1;
        unsigned int RESERVED3:1;
        unsigned int focusRingNeedsRedisplay:1;
        unsigned int skipRemoveSuperviewCheck:1;
        unsigned int doesNotDrawBackground:1;
        unsigned int needsTile:1;
        unsigned int hasVerticalRuler:1;
        unsigned int hasHorizontalRuler:1;
        unsigned int showRulers:1;
        unsigned int oldRulerInstalled:1;
        unsigned int borderType:2;
        unsigned int noDynamicScrolling:1;
        unsigned int hScrollerStatus:1;
        unsigned int vScrollerStatus:1;
        unsigned int hScrollerRequired:1;
        unsigned int vScrollerRequired:1;
    } _sFlags;
    id _extraIvars;
    NSRulerView *_horizontalRuler;
    NSRulerView *_verticalRuler;
    NSClipView *_contentView;
    NSClipView *_headerClipView;
    double _hPageAmt;
    double _vPageAmt;
    double _hLineAmt;
    double _vLineAmt;
    double _hThumbDestination;
    double _vThumbDestination;
    struct NSEdgeInsets _contentInsets;
    struct NSEdgeInsets _scrollerInsets;
    _NSScrollViewLayoutHelper *_baseContentAreaLayout;
    NSView *_findBarView;
    NSScrollingBehavior *_scrollingBehavior;
    NSScrollerImpPair *_scrollerImpPair;
    double _effectiveMagnification;
    double _magnification;
    double _minMagnification;
    double _maxMagnification;
    double _magnificationLock;
    struct CGPoint _lastSmartMagnificationLocation;
    struct CGRect _lastSmartMagnificationRect;
    struct CGPoint _magnificationAnchorPoint;
    NSScrollView *_synchronizedSiblingHorizontal;
    NSScrollView *_synchronizedSiblingVertical;
    id <NSScrollViewDelegate> _delegate;
    NSArray *_pageAlignmentsHorizontal;
    NSArray *_pageAlignmentsVertical;
    _NSScrollViewFloatingSubviewsContainerView *_floatingSubviewsHorizontalContainer;
    _NSScrollViewFloatingSubviewsContainerView *_floatingSubviewsVerticalContainer;
    _NSScrollViewFloatingDebugView *_floatingDebugView;
    NSView *_currentRulerLineView;
    id _mouseDownMonitor;
    struct CGSize _decelerationRate;
    NSView *_moreLeftContentIndicator;
    NSView *_moreRightContentIndicator;
    NSGestureRecognizer *_panGestureRecognizer;
    unsigned char _inMagnificationAnimationCount;
    _NSScrollViewContentBackgroundView *_contentBackgroundView;
    unsigned int _tilingContentView:1;
    unsigned int _inScrollGesture:1;
    unsigned int _hasAccessoryViewsInScrollerAreas:1;
    unsigned int _hasScrollOccurred:1;
    unsigned int _allowMagnification:1;
    unsigned int _supressMagnificationUpdateFromBoundsChange:1;
    unsigned int _inMagnificationGesture:1;
    unsigned int _hasMsgTracedFutureResponsiveOptInOut:1;
    unsigned int _ignoreClippedSiblings:1;
    unsigned int _delegateImplementsDidScroll:1;
    unsigned int _horizontalAxisScrollingMode:2;
    unsigned int _verticalAxisScrollingMode:2;
    unsigned int _stuntedForIB:1;
    unsigned int _forceContentsInseStyleLayout:1;
    unsigned int _automaticallyAdjustsContentInsets:1;
    unsigned int _haveCheckedForScrollerSizeMethodOverrides:1;
    unsigned int _useCompatibiltyScrollerWidthMethods:1;
    unsigned int _hasHorizontalMoreContentIndicators:2;
    unsigned int _updateAutomaticContentInsetsInProgress:1;
}

+ (void)_drawCornerWidgetInRect:(struct CGRect)arg1 withSmallSize:(BOOL)arg2;
+ (BOOL)automaticallyNotifiesObserversOfDocumentView;
+ (id)keyPathsForValuesAffectingDocumentView;
+ (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1 hasHorizontalScroller:(BOOL)arg2 hasVerticalScroller:(BOOL)arg3 borderType:(unsigned long long)arg4;
+ (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1 hasHorizontalScroller:(BOOL)arg2 hasVerticalScroller:(BOOL)arg3 borderType:(unsigned long long)arg4;
+ (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1 horizontalScrollerClass:(Class)arg2 verticalScrollerClass:(Class)arg3 borderType:(unsigned long long)arg4 controlSize:(unsigned long long)arg5 scrollerStyle:(long long)arg6;
+ (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1 horizontalScrollerClass:(Class)arg2 verticalScrollerClass:(Class)arg3 borderType:(unsigned long long)arg4 controlSize:(unsigned long long)arg5 scrollerStyle:(long long)arg6;
+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;
+ (Class)rulerViewClass;
+ (void)setRulerViewClass:(Class)arg1;
+ (Class)_verticalScrollerClass;
+ (Class)_horizontalScrollerClass;
+ (void)_setShowsResponsiveScrollingStatus:(BOOL)arg1;
+ (id)_findScrollViewToAutoLiveScrollInWindow:(id)arg1;
- (BOOL)_forcesContentInsetsLayout;
- (void)_setForcesContentInsetsLayout:(BOOL)arg1;
@property struct NSEdgeInsets scrollerInsets;
@property BOOL automaticallyAdjustsContentInsets;
@property struct NSEdgeInsets contentInsets;
- (void)setMagnification:(double)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (void)magnifyToFitRect:(struct CGRect)arg1;
- (void)_magnifyToFitRect:(struct CGRect)arg1 animate:(BOOL)arg2;
- (void)_smartMagnifyToRect:(struct CGRect)arg1 centeredAt:(struct CGPoint)arg2 animate:(BOOL)arg3;
@property double minMagnification;
@property double maxMagnification;
@property double magnification;
- (void)_setMagnification:(double)arg1 centeredAroundPoint:(struct CGPoint)arg2 animate:(BOOL)arg3;
- (void)_setMagnification:(double)arg1;
- (double)_magnification;
@property BOOL allowsMagnification;
- (long long)findBarPosition;
- (void)setFindBarPosition:(long long)arg1;
- (void)findBarViewDidChangeHeight;
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (double)_destinationFloatValueForScroller:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)removeFromSuperview;
- (id)_contentView;
@property(readonly) NSClipView *_headerClipView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_conditionallyReflectScrolledClipView;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (id)_copySubviewsInOrderOfDisplay;
- (void)scrollClipView:(id)arg1 toPoint:(struct CGPoint)arg2;
- (void)tile;
- (void)_tileWithoutRecursing;
- (void)_setVerticalScrollerHidden:(BOOL)arg1;
- (void)_setHorizontalScrollerHidden:(BOOL)arg1;
- (BOOL)_cornerViewHidesWithVerticalScroller;
- (void)_setWindow:(id)arg1;
- (void)_updateForLiveResizeWithOldSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)_dynamicColorsChanged:(id)arg1;
- (void)_updateWithDisplay;
- (void)_update;
- (void)setNextKeyView:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)_scrollPageInDirection:(int)arg1;
- (void)_doScroller:(id)arg1;
@property BOOL usesPredominantAxisScrolling;
@property long long verticalScrollElasticity;
@property long long horizontalScrollElasticity;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)_endMagnifyGesture;
- (id)_magnificationInflectionPoints;
- (void)_beginMagnifyGesture;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)_endMagnifying;
- (void)_beginMagnifying;
- (void)_panWithGestureRecognizer:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)scrollWheel:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)_endScrollGesture;
- (void)_beginScrollGesture;
- (void)_informDelegateUserDidLiveScroll;
- (void)_informDelegateDidEndLiveScroll;
- (void)_informDelegateWillStartLiveScroll;
- (void)_informDelegateOfNewScrollGesture;
- (BOOL)_isInScrollGesture;
- (BOOL)_canOptInToConcurrentScrolling;
- (BOOL)_allowsHorizontalStretching;
- (BOOL)_allowsVerticalStretching;
- (void)_setHasScrollOccurredOutsideOfGesture:(BOOL)arg1;
- (BOOL)_hasScrollOccurredOutsideOfGesture;
- (void)_snapRubberBandDueToNotification:(id)arg1;
- (struct CGSize)_stretchAmount;
- (BOOL)_pinnedInDirectionOfScroll:(id)arg1;
- (BOOL)_pinnedInDirectionX:(double)arg1 y:(double)arg2;
- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
@property double pageScroll;
@property double verticalPageScroll;
@property double horizontalPageScroll;
@property double lineScroll;
@property double verticalLineScroll;
@property double horizontalLineScroll;
- (double)_repeatMultiplier:(double)arg1;
- (void)_commonNewScroll:(id)arg1;
- (void)_setScrollerNeedsDisplay:(id)arg1;
- (id)_rulerline:(double)arg1:(double)arg2 last:(BOOL)arg3;
- (void)_updateRulerlineForRuler:(id)arg1 oldPosition:(double)arg2 newPosition:(double)arg3 vertical:(BOOL)arg4;
- (void)_updateMoreContentIndicatorVisibility;
- (void)_newScroll:(BOOL)arg1;
@property BOOL autohidesScrollers;
@property(retain) NSScroller *horizontalScroller;
@property(retain) NSScroller *verticalScroller;
@property BOOL hasHorizontalScroller;
@property BOOL hasVerticalScroller;
@property(copy) NSColor *backgroundColor;
@property unsigned long long borderType;
- (BOOL)_hasRectangularFocusRingAroundFrame;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_dirtyFocusRingOrMask;
- (void)_viewDidDrawInLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_drawRect:(struct CGRect)arg1 clip:(BOOL)arg2;
- (void)_drawOldSchoolFocusRingIfNecessaryInRect:(struct CGRect)arg1;
- (struct CGRect)_insetBounds;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
- (void)showActiveFirstResponderIndication;
- (BOOL)_shouldUseFocusRingMask;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)layout;
- (void)_didRemoveLayer;
- (void)_layoutLayerPiecesIfNeeded;
- (void)_updateCornerViewForLayer;
- (void)_drawCornerViewInRect:(struct CGRect)arg1;
- (void)_removeCornerViewForLayer;
- (void)_setCornerViewForLayer:(id)arg1;
- (id)_cornerViewForLayer;
- (BOOL)_needsCornerViewDrawn;
- (void)_tileIfNeeded;
- (Class)_classToCheckForWantsUpdateLayer;
@property BOOL drawsBackground;
@property BOOL scrollsDynamically;
- (void)setCopiesOnScroll:(BOOL)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
@property(readonly) struct CGSize contentSize;
@property(retain) NSCursor *documentCursor;
@property(readonly) struct CGRect documentVisibleRect;
@property(retain) NSClipView *contentView;
- (void)_sortSubviews;
@property(retain) NSView *documentView;
- (BOOL)_fixHeaderAndCornerViews;
- (BOOL)_documentViewWantsHeaderView;
@property long long scrollerKnobStyle;
@property long long scrollerStyle;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2;
- (struct CGRect)_cornerViewFrame;
- (id)_cornerView;
- (void)_applyContentAreaLayout:(id)arg1;
- (id)_allocContentAreaLayout;
- (void)_setContentViewFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (double)_verticalScrollerWidthWithBorder;
- (double)_horizontalScrollerHeightWithBorder;
- (double)_verticalScrollerWidth;
- (double)_horizontalScrollerHeight;
- (void)dealloc;
- (void)_removeUnderTitlebarNotifications;
- (void)geometryInWindowDidChange;
- (void)_updateStateOfUnderTitlebarView;
- (void)_clearUnderTitlebarView:(id)arg1;
- (id)_makeUnderTitlebarView;
- (void)_setUnderTitlebarView:(id)arg1;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (BOOL)_canAddUnderTitlebarView;
- (id)_underTitlebarView;
- (void)_addUnderTitlebarNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewWillDraw;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_unregisterForWindowWillClose;
- (void)_registerForWindowWillClose;
- (void)_floatingSubviewCountChanged;
- (id)_floatingSubviewsContainerForAxis:(long long)arg1;
- (void)addFloatingSubview:(id)arg1 forAxis:(long long)arg2;
- (void)viewDidMoveToWindow;
- (void)_finishedMakingConnections;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (BOOL)_shouldUseInclusiveLayersAutomatically;
- (BOOL)_hasNonLayeredOverlappingSiblingView;
- (BOOL)_willCoverBackingStore;
- (BOOL)_isConcurrentScrollingCompatible;
- (void)_messageTraceFutureResponsiveScrollingOptInOut;
- (BOOL)_documentViewSubclassesLockFocus;
- (void)_ensureOveralyScrollerFlashForWindowOrderIn:(id)arg1;
- (void)_resetOveralyScrollerFlashForWindowOrderOut:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)_pointInVisibleScroller:(struct CGPoint)arg1;
- (void)updateTrackingAreas;
- (void)_invalidateOverlayScrollerDebrisForScrollCopyOfClipView:(id)arg1 byDeltas:(struct CGPoint)arg2;
- (struct CGRect)_contentFrameMinusScrollers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)renewGState;
- (BOOL)_alwaysWantsContentInsetsLayout;
- (void)_updateContentInsetsIfAutomatic;
- (void)_updateAutomaticContentInsets;
- (void)_scrollerDidEndTracking:(id)arg1;
- (void)_scrollerDidBeginTracking:(id)arg1;
- (void)flashScrollers;
- (void)_pulseOverlayScrollers;
- (void)_overlayScroller:(id)arg1 didBecomeShown:(BOOL)arg2;
- (BOOL)_overlayScrollersShown;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_updateTrackingAreasWithInvalidCursorRects:(BOOL)arg1;
- (BOOL)_usesOverlayScrollers;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilityAdditionalChildren;
- (id)accessibilityScrollToShowDescendantAttributeForParameter:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (id)accessibilityContentsAttribute;
- (BOOL)accessibilityIsVerticalScrollBarAttributeSettable;
- (id)accessibilityVerticalScrollBarAttribute;
- (BOOL)accessibilityIsHorizontalScrollBarAttributeSettable;
- (id)accessibilityHorizontalScrollBarAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;
- (id)rulerStateDescription;
- (void)_handleBoundsChangeForSubview:(id)arg1;
- (void)_reflectDocumentViewBoundsChange;
@property(retain) NSRulerView *verticalRulerView;
@property(retain) NSRulerView *horizontalRulerView;
@property BOOL hasVerticalRuler;
@property BOOL hasHorizontalRuler;
@property BOOL rulersVisible;
- (id)accessibilitySizeAttribute;
- (id)accessibilityPositionAttribute;
@property BOOL automaticallyAdjustsContentViewInsets;
@property struct NSEdgeInsets contentInset;
@property double verticalScrollDecelerationFactor;
@property double horizontalScrollDecelerationFactor;
@property double decelerationRate;
@property(nonatomic, getter=_isStuntedForIB, setter=_setStuntedForIB:) BOOL _stuntedForIB;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_synchronizedSiblingsForAxis:(long long)arg1;
- (id)_synchronizedSiblingForAxis:(long long)arg1;
- (void)_setSynchronizedSibling:(id)arg1 forAxis:(long long)arg2;
- (BOOL)_wantsPageAlignedVerticalAxis;
- (void)_setWantsPageAlignedVerticalAxis:(BOOL)arg1;
- (BOOL)_wantsPageAlignedHorizontalAxis;
- (void)_setWantsPageAlignedHorizontalAxis:(BOOL)arg1;
- (unsigned long long)_scrollingModeForAxis:(long long)arg1;
- (void)_setScrollingMode:(unsigned long long)arg1 forAxis:(long long)arg2;
- (void)_setIngoreSynchronizedSiblings:(BOOL)arg1;
- (Class)_animatorClass;
- (BOOL)_overlayScrollerStateIsLocked;
- (void)_unlockOverlayScrollerState;
- (void)_lockOverlayScrollerState:(unsigned long long)arg1;
- (void)_hideOverlayScrollers;
- (struct CGRect)_boundsInsetForBorder;
@property(nonatomic) BOOL autoforwardsScrollWheelEvents;
@property(retain, nonatomic, setter=_setLineBorderColor:) NSColor *_lineBorderColor;
- (void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2;
- (void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(struct CGRect)arg2;
- (BOOL)scrollerImpPair:(id)arg1 isContentPointVisible:(struct CGPoint)arg2;
- (struct CGPoint)scrollerImpPair:(id)arg1 convertContentPoint:(struct CGPoint)arg2 toScrollerImp:(id)arg3;
- (struct CGPoint)mouseLocationInContentAreaForScrollerImpPair:(id)arg1;
- (BOOL)inLiveResizeForScrollerImpPair:(id)arg1;
- (struct CGRect)contentAreaRectForScrollerImpPair:(id)arg1;
- (id)scrollerImpPair;
@property BOOL hasHorizontalMoreContentIndicators;
@property(nonatomic) BOOL drawsContentShadow;
- (void)_unregisterNonInterferingAccessoryView:(id)arg1;
- (void)_registerNonInterferingAccessoryView:(id)arg1;
- (BOOL)_accessoryViewMightInterfereWithOverlayScrollers:(id)arg1;
- (void)_resetScrollingBehavior;
- (void)removeFloatingHeaderView:(id)arg1;
- (void)addFloatingHeaderView:(id)arg1 forAxis:(long long)arg2;
- (id)_pageAlignmentsForAxis:(long long)arg1;
- (void)_setPageAlignments:(id)arg1 forAxis:(long long)arg2;
- (void)_automatedLiveScrollingDidEnd;
- (void)_automatedLiveScrollingWillBegin;
- (void)_automateLiveScroll;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

