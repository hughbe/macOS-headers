//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSColorSpace, NSData, NSDictionary, NSDisplayCycleObserver, NSDockTile, NSError, NSEvent, NSInspectorBar, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSRegion, NSResponder, NSScreen, NSSnappingInfo, NSString, NSUndoManager, NSView, NSViewController, NSViewHierarchyLock, NSWindow, NSWindowController, _NSWindowAnimator, _NSWindowFullScreenContentController, _NSWindowTransformAnimation;
@protocol NSAppearanceCustomization;

@interface NSWindowAuxiliary : NSObject
{
    NSString *_userInterfaceItemIdentifier;
    NSDockTile *dockTile;
    unsigned int _rememberedFirstResponderState;
    NSViewHierarchyLock *viewHierarchyLock;
    NSUndoManager *undoManager;
    NSRecursiveLock *responderLock;
    id _rememberedFirstResponder;
    NSMapTable *_threadContexts;
    NSView *_lastFocusRingView;
    NSRegion *_lastFocusRingBleedRegion;
    NSWindow *docWindow;
    NSWindow *sheetWindow;
    NSMutableArray *_attachedSheets;
    NSMutableArray *_queuedSheets;
    NSString *dockWindowTitle;
    struct CGPoint stashedOrigin;
    id _moveHelper;
    void *windowHandlerRef;
    void *rootMetricsHandlerRef;
    unsigned int autoPositionMask;
    short _toolTipDisabledCount;
    unsigned short _delayedDisplayDisableCount;
    NSColorSpace *colorSpace;
    double alpha;
    struct CGPoint collapsedOrigin;
    NSColor *pattern;
    id _bindingAdaptor;
    NSView *_lastOtherHit;
    NSColor *compositedPattern;
    struct __auxWFlags {
        unsigned int hasShadow:1;
        unsigned int forceActiveControls:1;
        unsigned int minimized:1;
        unsigned int keepChildrenAttached:1;
        unsigned int explicitCollectionBehavior:1;
        unsigned int resigningKeyFocusOnly:1;
        unsigned int miniWindowTitleIsAGuess:1;
        unsigned int dontSyncSurfaceToView:1;
        unsigned int windowPositionIsStale:1;
        unsigned int handlingDisplayChanged:1;
        unsigned int screenUpdatedDuringDisplayChange:1;
        unsigned int locationIsTemporary:1;
        unsigned int canHide:1;
        unsigned int isOpaque:1;
        unsigned int receivedDockDeathNotification:1;
        unsigned int minimizeCompleted:1;
        unsigned int minimizeFailed:1;
        unsigned int windowClosed:1;
        unsigned int omouseupPending:1;
        unsigned int borderViewHasDisplayName:1;
        unsigned int delegateReturnsFieldEditor:1;
        unsigned int ownsRealWindow:1;
        unsigned int mightBeMovingClientSide:1;
        unsigned int defaultButtonSuppressed:1;
        unsigned int movableByBackground:1;
        unsigned int preventsActivation:1;
        unsigned int ignoresMouseEvents:1;
        unsigned int keyWindowIgnoringFocus:1;
        unsigned int currentDepth:4;
        unsigned int __unusedAlso____________:3;
        unsigned int allowsToolTipsWhenApplicationIsInactive:1;
        unsigned int needsToSetIgnoreTag:1;
        unsigned int needsToResetDragMargins:1;
        unsigned int occlusionStateIsVisible:1;
        unsigned int needsToRemoveFieldEditor:1;
        unsigned int wantsHideOnDeactivate:1;
        unsigned int aspectRatioForContent:1;
        unsigned int resizeIncrementsForContent:1;
        unsigned int minSizeForContent:1;
        unsigned int maxSizeForContent:1;
        unsigned int modalIsActive:1;
        unsigned int excludedFromVisibleWindowList:1;
        unsigned int preservesContentDuringLiveResize:1;
        unsigned int autorecalculatesKeyViewLoop:1;
        unsigned int keyViewLoopNeedsRecalc:1;
        unsigned int keyViewGroupBoundaryNeedRecalc:1;
        unsigned int keyViewRedirectionDisabled:1;
        unsigned int displaysWhenScreenProfileChanges:1;
        unsigned int hidesToolbarButton:1;
        unsigned int dirtyDefaultButtonCell:1;
        unsigned int noDefaultButton:1;
        unsigned int allowsCursorRectsWhenInactive:1;
        unsigned int sharesParentKeyState:1;
        unsigned int canBecomeVisibleWithoutLogin:1;
        unsigned int trackingAreasDirty:1;
        unsigned int wantsMouseMoveEventsInBackground:1;
        unsigned int sharingType:2;
        unsigned int preferredBackingLocation:2;
        unsigned int orderOutInProgress:1;
        unsigned int movable:1;
        unsigned int modeDisablesServerSideDrag:1;
        unsigned int showsLockButton:1;
        unsigned int wasCGOrderingEnabled:1;
        unsigned int wasReshapingEnabled:1;
        unsigned int autorecalculatesTopBorderThickness:1;
        unsigned int autorecalculatesBottomBorderThickness:1;
        unsigned int resizeWeighting:2;
        unsigned int showsTopBorderSeparator:1;
        unsigned int showsBottomBorderSeparator:1;
        unsigned int lightBottomGradient:1;
        unsigned int titlebarAppearsTransparent:1;
        unsigned int hasCornerMask:1;
        unsigned int autoLayerBackedBorderView:1;
        unsigned int shouldSnapSizeWhenResizing:1;
        unsigned int shouldUnSnapSizeWhenResizing:1;
        unsigned int __adobeRetained:1;
        unsigned int gatheringActiveGestureRecognizers:1;
        unsigned int sendingQuickLookToResponders:1;
        unsigned int deferredQuickLook:1;
        unsigned int shadowStyle:6;
        unsigned int pendingTrackingAreas:1;
        unsigned int handlingInvalidCursorRects:1;
        unsigned int allowsConcurrentViewDrawing:1;
        unsigned int anyViewCanDrawConcurrently:1;
        unsigned int preventsAppTerminationWhenModal:1;
        unsigned int explicitColorSpace:1;
        unsigned int orderFrontAnimationType:4;
        unsigned int orderOutAnimationType:4;
        unsigned int isRestorable:1;
        unsigned int hasInvalidRestorableState:1;
        unsigned int hasEverHadInvalidRestorableState:1;
        unsigned int contentsHaveInvalidPersistentState:1;
        unsigned int existedAtLaunch:1;
        unsigned int alphaHasChanged:1;
        unsigned int showsAutosaveButton:1;
        unsigned int suppressWillOrderOffScreenNotification:1;
        unsigned int ignoresMouseEventsIsSetOrClearedExplicitly:1;
        unsigned int movedOffscreen:1;
        unsigned int accessibilityTitleCellRemoved:1;
        unsigned int doingCacheDisplayInRect:1;
        unsigned int ignoreCurrentEvent:1;
        unsigned int sharesParentFirstResponder:1;
        unsigned int inLayoutPass:1;
        unsigned int viewsConstraintsAreClean:1;
        unsigned int viewsLayoutDependentMetricsAreClean:1;
        unsigned int forceMainAppearance:1;
        unsigned int RTLLayoutDirection:1;
        unsigned int forceInactiveShadow:1;
        unsigned int isInactiveRevisionWindow:1;
        unsigned int isClosed:1;
        unsigned int currentLiveResizeEdges:4;
        unsigned int wantsFullScreenModeIfAppropriate:1;
        unsigned int freeOnCloseWindowIsClosing:1;
        unsigned int wasVisibleBeforeMinimization:1;
        unsigned int delegateRespondsToWillEncodeRestorableState:1;
        unsigned int wasActiveBeforeCurrentEvent:1;
        unsigned int hasKeyAppearance:1;
        unsigned int hasMainAppearance:1;
        unsigned int shouldHaveKeyAppearance:1;
        unsigned int shouldHaveMainAppearance:1;
        unsigned int hasKeyFocus:1;
        unsigned int hasMainFocus:1;
        unsigned int canHostLayersInWindowServer:1;
        unsigned int hostsLayersInWindowServer:1;
        unsigned int hasIncompatibleAppearanceOverride:1;
        unsigned int stoleKeyFocus:1;
        unsigned int documentShowsPanelOnClose:1;
        unsigned int usesPointIntegralizationForLayout:1;
        unsigned int spaceAssignmentDone:1;
        unsigned int disableUserInteraction:1;
        unsigned int hasWeakTitleBindingToContentViewController:1;
        unsigned int titleVisibility:3;
        unsigned int autoFlatteningDisabled:1;
        unsigned int minFullScreenContentSizeSet:1;
        unsigned int maxFullScreenContentSizeSet:1;
        unsigned int measuringMinFullScreenContentSize:1;
        unsigned int isRemovingFromParentWindow:1;
        unsigned int overrideIsOnActiveSpace:1;
        unsigned int shouldCleanupFullScreen:1;
        unsigned int isSnapping:1;
        unsigned int windowIsMoving:1;
        unsigned int snapSizeTimerStarted:1;
        unsigned int alwaysOnTop:1;
        unsigned int ignoreResignFirstResponder:1;
        unsigned int startShowingWindowDockingFeedbackScheduled:1;
        unsigned int preventSetFrameScreenReassignment:1;
        unsigned int selectActiveShadow:1;
        unsigned int isInHiddenWindowTab:1;
        unsigned int temporarilyIgnoreMoves:1;
        unsigned int ignoreWindowStackController:1;
        unsigned int isPerformingRestoration:1;
        unsigned int hasTimeMachineDelegate:1;
        unsigned int layoutUpdateObserverScheduled:1;
        unsigned int RTLLayoutDirectionWasSet:1;
        unsigned int windowWillJoinActiveFullScreenSpace:1;
        unsigned int hasExplicitTabbingIdentifier:1;
        unsigned int firstResponderIsWeak:1;
        unsigned int ignoreResignMainEvent:1;
        unsigned int borderViewNeedsSetResetDragMargins:1;
        unsigned int minimizedInFullScreen:1;
    } _auxWFlags;
    void *_windowRef;
    double _scaleFactor;
    struct __CFArray *_mouseMovedListeners;
    NSRegion *_needsDisplayRegion;
    NSRegion *_deferredNeedsDisplayRegion;
    struct CGRect userFrame;
    NSMutableSet *_customFieldEditors;
    NSMutableArray *childWindows;
    NSMutableArray *childOrdering;
    NSMutableArray *_touchListeners;
    NSDictionary *_animationsDictionary;
    id clientSideDragMonitor;
    NSView *_latchedViewForScrollEvents;
    _NSWindowFullScreenContentController *_fullScreenContentController;
    _NSWindowTransformAnimation *_runningWindowTransformAnimation;
    long long _animationBehavior;
    Class restorationClass;
    unsigned int persistentUIWindowID;
    unsigned int movementGroupID;
    struct CGSize movementGroupOffset;
    long long documentEditingState;
    NSError *documentAutosavingError;
    NSError *nonModalDocumentError;
    NSView *titleFieldPlaceholderView;
    CDUnknownBlockType transformDidCompleteHandler;
    struct __CFRunLoopObserver *_windowDragTypeObserver;
    NSResponder *savedFirstResponder;
    NSInspectorBar *inspectorBar;
    struct _NSZone *cursorZone;
    unsigned long long fullScreenPresentationOptions;
    unsigned long long _hostsLayersInWindowServerSuspensions;
    long long _viewScrollingCount;
    struct CGSize _layoutMinSize;
    struct CGSize _layoutMaxSize;
    struct CGSize _layoutSlightlyMinSize;
    struct CGSize _layoutSlightlyMaxSize;
    struct __CFRunLoopObserver *_tilingUpdateObserver;
    unsigned long long _liveResizeCount;
    NSMutableArray *_activeGestureRecognizers;
    NSView *_activeGestureRecognizersStartView;
    NSEvent *_activeGestureRecognizersStartEvent;
    unsigned long long _activeGestureRecognizerEvents;
    unsigned long long _previousGestureEventMaskBeforeRecognizers;
    long long _lastGestureRecognizerPressureMTID;
    long long _willDisplayBeforeEndOfCurrentRunloopPassCount;
    NSDisplayCycleObserver *_updateConstraintsObserver;
    unsigned long long _lastUpdateConstraintsCycleIdentifier;
    unsigned long long _lastUpdateConstraintsCycleCount;
    NSDisplayCycleObserver *_layoutObserver;
    unsigned long long _lastLayoutCycleIdentifier;
    unsigned long long _lastLayoutCycleCount;
    NSDisplayCycleObserver *_displayObserver;
    unsigned long long _lastDisplayCycleIdentifier;
    unsigned long long _lastDisplayCycleCount;
    NSDisplayCycleObserver *_updateStructuralRegionsObserver;
    unsigned long long _lastUpdateStructuralRegionsCycleIdentifier;
    unsigned long long _lastUpdateStructuralRegionsCycleCount;
    unsigned long long _viewCount;
    id _cgsWindow;
    NSWindowController *_windowController;
    _NSWindowAnimator *_animator;
    NSWindow *_parentWindow;
    NSData *_lastDragRegionData;
    NSViewController *_contentViewController;
    NSScreen *_savedScreen;
    NSDictionary *_cachedShadowParameters;
    NSMutableDictionary *_windowLayoutsByScreenLayout;
    NSMutableDictionary *_cachedStandardButtons;
    long long _tabbingMode;
    unsigned long long _collectionBehavior;
    unsigned long long _lastAppliedCollectionBehavior;
    NSSnappingInfo *_snappingInfo;
    BOOL _enteringFullScreen;
    NSObject<NSAppearanceCustomization> *_appearanceParent;
}

- (void).cxx_destruct;
@property __weak NSObject<NSAppearanceCustomization> *appearanceParent; // @synthesize appearanceParent=_appearanceParent;
@property BOOL enteringFullScreen; // @synthesize enteringFullScreen=_enteringFullScreen;
@property __weak _NSWindowAnimator *animator; // @synthesize animator=_animator;
@property __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) NSSnappingInfo *snappingInfo; // @synthesize snappingInfo=_snappingInfo;
@property(nonatomic) unsigned long long lastAppliedCollectionBehavior; // @synthesize lastAppliedCollectionBehavior=_lastAppliedCollectionBehavior;
@property(nonatomic) unsigned long long collectionBehavior; // @synthesize collectionBehavior=_collectionBehavior;
@property(nonatomic) long long tabbingMode; // @synthesize tabbingMode=_tabbingMode;
@property(retain) NSMutableDictionary *windowLayoutsByScreenLayout; // @synthesize windowLayoutsByScreenLayout=_windowLayoutsByScreenLayout;
@property(copy, nonatomic) NSData *lastDragRegionData; // @synthesize lastDragRegionData=_lastDragRegionData;
@property(retain) NSMutableDictionary *cachedStandardButtons; // @synthesize cachedStandardButtons=_cachedStandardButtons;
@property(retain) NSDictionary *cachedShadowParameters; // @synthesize cachedShadowParameters=_cachedShadowParameters;
@property(retain) NSScreen *savedScreen; // @synthesize savedScreen=_savedScreen;
@property(retain) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property __weak NSWindowController *windowController; // @dynamic windowController;
- (void)dealloc;

@end

