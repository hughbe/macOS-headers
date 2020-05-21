//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKActionController, AKAttributeController, AKCursorController_Mac, AKDFRController, AKFormFeatureDetectorController, AKHighlightAnnotationController, AKLegacyDoodleController, AKMainEventHandler, AKModelController, AKPageController, AKSidecarController, AKSignatureModelController, AKSparseMutableControllerArray, AKStatistics, AKTextEditorController, AKToolController, AKToolbarView, AKToolbarViewController, AKUndoController, NSMapTable, NSString, NSView, NSWindow;
@protocol AKControllerDelegateProtocol;

@interface AKController : NSObject
{
    BOOL overlayShouldPixelate;
    BOOL _isTornDown;
    BOOL _allEditingDisabled;
    BOOL _annotationEditingEnabled;
    BOOL _pencilAlwaysDraws;
    BOOL _isTestingInstance;
    BOOL _hideAllAdornments;
    BOOL _isLogging;
    BOOL _selectNewlyCreatedAnnotations;
    BOOL _shapeDetectionEnabled;
    BOOL _useHighVisibilityDefaultInks;
    id <AKControllerDelegateProtocol> _delegate;
    AKModelController *_modelController;
    NSView *_toolbarView;
    unsigned long long _currentPageIndex;
    NSString *_author;
    AKSparseMutableControllerArray *_pageControllers;
    NSMapTable *_pageModelControllersToPageControllers;
    AKActionController *_actionController;
    AKToolController *_toolController;
    AKToolbarViewController *_toolbarViewController;
    AKAttributeController *_attributeController;
    AKUndoController *_undoController;
    AKSidecarController *_sidecarController;
    AKMainEventHandler *_mainEventHandler;
    AKTextEditorController *_textEditorController;
    AKLegacyDoodleController *_legacyDoodleController;
    AKSignatureModelController *_signatureModelController;
    AKFormFeatureDetectorController *_formDetectionController;
    AKHighlightAnnotationController *_highlightAnnotationController;
    AKStatistics *_statisticsLogger;
    AKCursorController_Mac *_cursorController;
    NSWindow *_cachedWindow;
    AKDFRController *_dfrController;
    NSString *_suggestedTouchBarIdentifier;
    unsigned long long _pasteCascadingMultiplier;
    long long _lastPasteboardChangeCount;
    unsigned long long _creationCascadingMultiplier;
    AKPageController *_lastCreationCascadingPageController;
    double _akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
    double _screenPixelsToCanvasPixelsDownscale;
    AKToolbarView *_modernToolbarView;
}

+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
+ (BOOL)_isInLowMemoryEnvironment;
+ (BOOL)hasPressureCapableHardware;
+ (id)akBundleIdentifier;
+ (id)akBundle;
+ (id)controllerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL useHighVisibilityDefaultInks; // @synthesize useHighVisibilityDefaultInks=_useHighVisibilityDefaultInks;
@property(nonatomic) __weak AKToolbarView *modernToolbarView; // @synthesize modernToolbarView=_modernToolbarView;
@property(nonatomic) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) BOOL selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property(nonatomic) BOOL isLogging; // @synthesize isLogging=_isLogging;
@property double screenPixelsToCanvasPixelsDownscale; // @synthesize screenPixelsToCanvasPixelsDownscale=_screenPixelsToCanvasPixelsDownscale;
@property double akModelToCanvasFixedPixelScaleOfFirstEncounteredPage; // @synthesize akModelToCanvasFixedPixelScaleOfFirstEncounteredPage=_akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
@property(nonatomic) BOOL hideAllAdornments; // @synthesize hideAllAdornments=_hideAllAdornments;
@property __weak AKPageController *lastCreationCascadingPageController; // @synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController;
@property unsigned long long creationCascadingMultiplier; // @synthesize creationCascadingMultiplier=_creationCascadingMultiplier;
@property long long lastPasteboardChangeCount; // @synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount;
@property unsigned long long pasteCascadingMultiplier; // @synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier;
@property(copy, nonatomic) NSString *suggestedTouchBarIdentifier; // @synthesize suggestedTouchBarIdentifier=_suggestedTouchBarIdentifier;
@property(retain, nonatomic) AKDFRController *dfrController; // @synthesize dfrController=_dfrController;
@property __weak NSWindow *cachedWindow; // @synthesize cachedWindow=_cachedWindow;
@property(retain) AKCursorController_Mac *cursorController; // @synthesize cursorController=_cursorController;
@property(retain) AKStatistics *statisticsLogger; // @synthesize statisticsLogger=_statisticsLogger;
@property(retain) AKHighlightAnnotationController *highlightAnnotationController; // @synthesize highlightAnnotationController=_highlightAnnotationController;
@property(retain) AKFormFeatureDetectorController *formDetectionController; // @synthesize formDetectionController=_formDetectionController;
@property(retain) AKSignatureModelController *signatureModelController; // @synthesize signatureModelController=_signatureModelController;
@property(retain) AKLegacyDoodleController *legacyDoodleController; // @synthesize legacyDoodleController=_legacyDoodleController;
@property(retain) AKTextEditorController *textEditorController; // @synthesize textEditorController=_textEditorController;
@property(retain) AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property(retain) AKSidecarController *sidecarController; // @synthesize sidecarController=_sidecarController;
@property(retain) AKUndoController *undoController; // @synthesize undoController=_undoController;
@property(retain) AKAttributeController *attributeController; // @synthesize attributeController=_attributeController;
@property(retain) AKToolbarViewController *toolbarViewController; // @synthesize toolbarViewController=_toolbarViewController;
@property(retain) AKToolController *toolController; // @synthesize toolController=_toolController;
@property(retain) AKActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) NSMapTable *pageModelControllersToPageControllers; // @synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers;
@property(retain) AKSparseMutableControllerArray *pageControllers; // @synthesize pageControllers=_pageControllers;
@property BOOL isTestingInstance; // @synthesize isTestingInstance=_isTestingInstance;
@property(copy) NSString *author; // @synthesize author=_author;
@property unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) BOOL pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property(nonatomic) BOOL annotationEditingEnabled; // @synthesize annotationEditingEnabled=_annotationEditingEnabled;
@property(nonatomic) BOOL allEditingDisabled; // @synthesize allEditingDisabled=_allEditingDisabled;
@property(retain) NSView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain) AKModelController *modelController; // @synthesize modelController=_modelController;
@property __weak id <AKControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property BOOL isTornDown; // @synthesize isTornDown=_isTornDown;
@property(nonatomic) BOOL overlayShouldPixelate; // @synthesize overlayShouldPixelate;
- (void)endLogging;
- (void)beginLogging:(id)arg1 documentType:(id)arg2;
- (void)strokeAddedNotification:(id)arg1;
- (BOOL)_isInDFRAction;
- (BOOL)isInDFRAction;
- (id)akTouchBar;
- (id)groupTouchBarItemWithIdentifier:(id)arg1;
- (void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)arg1;
- (id)hostingWindow;
- (BOOL)isPresentingPopover;
- (struct CGRect)_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)currentPageController;
- (BOOL)shouldDrawVariableStrokeDoodles;
- (BOOL)_validateCutCopyDelete;
- (BOOL)isDFRInitialized;
@property(readonly, nonatomic) BOOL onlyDrawWithApplePencil;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(BOOL)arg2;
- (void)highlightableSelectionDidEndChanging;
- (void)highlightableSelectionWillBeginChanging;
- (void)highlightableSelectionChanged;
- (BOOL)canBeginEditingTextAnnotation:(id)arg1;
- (BOOL)validateEditTextAnnotation:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (BOOL)validateShowAttributeInspector:(id)arg1;
- (void)showAttributeInspector:(id)arg1;
- (BOOL)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateDuplicate:(id)arg1;
- (void)duplicate:(id)arg1;
- (BOOL)validateDelete:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)validatePaste:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)validateCopy:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateCut:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (BOOL)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (void)delayedUndoControllerSetup;
- (void)clearUndoStack;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (id)signaturesMenu;
- (void)applyCurrentCrop;
- (void)resetToDefaultToolMode;
- (void)setToolMode:(unsigned long long)arg1;
- (unsigned long long)toolMode;
- (BOOL)handleEvent:(id)arg1;
- (struct CGRect)contentAlignedRectForRect:(struct CGRect)arg1 onPageAtIndex:(unsigned long long)arg2;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)commitEditing;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (BOOL)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (void)performActionForSender:(id)arg1;
- (BOOL)validateSender:(id)arg1;
- (void)enclosingScrollViewDidScroll:(id)arg1;
- (void)_setupPageModelController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)teardown;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;

@end

