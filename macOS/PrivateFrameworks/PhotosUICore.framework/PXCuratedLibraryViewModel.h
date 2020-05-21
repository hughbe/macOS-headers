//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryAssetsDataSourceManagerDelegate-Protocol.h>
#import <PhotosUICore/PXInfoProvider-Protocol.h>
#import <PhotosUICore/PXInfoUpdaterObserver-Protocol.h>
#import <PhotosUICore/PXMutablePhotosLibraryViewModel-Protocol.h>

@class NSArray, NSHashTable, NSMutableSet, NSObject, NSSet, NSString, PXAssetActionManager, PXAssetReference, PXAssetsDataSource, PXCPLServiceUI, PXCuratedLibraryActionManager, PXCuratedLibraryAllPhotosAlphaAnimator, PXCuratedLibraryAnalysisStatus, PXCuratedLibraryAssetCollectionSkimmingInfo, PXCuratedLibraryAssetsDataSourceManager, PXCuratedLibraryLayoutSpecManager, PXCuratedLibraryStyleGuide, PXInfoUpdater, PXNumberAnimator, PXScrollViewSpeedometer, PXSectionedSelectionManager, PXSelectionSnapshot, PXUpdater, UXBarButtonItem;
@protocol OS_dispatch_queue, PXCuratedLibraryViewModelPresenter, PXFilterState;

@interface PXCuratedLibraryViewModel : PXObservable <PXMutablePhotosLibraryViewModel, PXCuratedLibraryAssetsDataSourceManagerDelegate, PXChangeObserver, PXAssetsDataSourceManagerObserver, PXInfoProvider, PXInfoUpdaterObserver>
{
    NSHashTable *_presenters;
    NSHashTable *_views;
    NSMutableSet *_visibleAssetCollections;
    double _normalizedColumnWidthWhenPinchStarted;
    double _pinchLogValue;
    double _pinchLogVelocity;
    double _pinchLastDate;
    BOOL _isUpdatingAllPhotosZoomState;
    BOOL _wasPinching;
    BOOL _wasInteractiveZooming;
    long long _pendingZoomColumnIndex;
    BOOL _animatePendingZoom;
    PXNumberAnimator *_columnWidthAnimator;
    PXCuratedLibraryAllPhotosAlphaAnimator *_allPhotosAlphaAnimator;
    id _pauseToken;
    BOOL _attemptedLazyCreationOfCplServiceUI;
    PXCPLServiceUI *_cplServiceUI;
    BOOL _isAppearing;
    BOOL _wantsTabBarVisible;
    BOOL _wantsToolbarVisible;
    BOOL _wantsSecondaryToolbarVisible;
    BOOL _wantsDarkStatusBar;
    BOOL _viewBasedDecorationsEnabled;
    BOOL _isSelecting;
    BOOL _isPinching;
    BOOL _isInteractiveZooming;
    BOOL _allPhotosAspectFit;
    BOOL _allPhotosCaptionsVisible;
    BOOL _allPhotosLayoutIsAnimating;
    BOOL _isPerformingInitialChanges;
    PXCuratedLibraryLayoutSpecManager *_specManager;
    PXCuratedLibraryStyleGuide *_styleGuide;
    PXCuratedLibraryAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    PXCuratedLibraryActionManager *_actionManager;
    NSSet *_allowedActions;
    long long _zoomLevelTransitionPhase;
    PXSectionedSelectionManager *_selectionManager;
    double _daysMarginScale;
    double _interactiveZoomColumnIndex;
    NSArray *_allPhotosAllowedColumns;
    NSArray *_allPhotosAllowedColumnWidths;
    PXAssetReference *_allPhotosAnchorAssetReference;
    long long _scrollRegime;
    PXCuratedLibraryAssetCollectionSkimmingInfo *_skimmingInfo;
    NSSet *_draggedAssetReferences;
    unsigned long long _libraryState;
    NSString *_selectModeCaption;
    long long _zoomLevel;
    id <PXFilterState> _currentFilterState;
    id <PXFilterState> _allPhotosFilterState;
    UXBarButtonItem *_navigationDisplayModeButtonItem;
    PXCuratedLibraryAnalysisStatus *_analysisStatus;
    PXUpdater *_updater;
    PXScrollViewSpeedometer *_scrollingSpeedometer;
    PXAssetActionManager *_assetActionManager;
    long long _chromeVisibilityAnimationCount;
    PXInfoUpdater *_selectedAssetsTypeCountUpdater;
    NSObject<OS_dispatch_queue> *_countUpdateQueue;
    long long _viewTimeSignpostID;
    struct CGPoint _lastScrollDirection;
    CDStruct_15189878 _selectedAssetsTypedCount;
    CDStruct_7c4e768e _pinchState;
    CDStruct_9b94aa0b _allPhotosZoomState;
}

+ (id)_cplServiceUI;
- (void).cxx_destruct;
@property(nonatomic) long long viewTimeSignpostID; // @synthesize viewTimeSignpostID=_viewTimeSignpostID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *countUpdateQueue; // @synthesize countUpdateQueue=_countUpdateQueue;
@property(readonly, nonatomic) PXInfoUpdater *selectedAssetsTypeCountUpdater; // @synthesize selectedAssetsTypeCountUpdater=_selectedAssetsTypeCountUpdater;
@property(nonatomic) long long chromeVisibilityAnimationCount; // @synthesize chromeVisibilityAnimationCount=_chromeVisibilityAnimationCount;
@property(retain, nonatomic) PXAssetActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property(retain, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // @synthesize scrollingSpeedometer=_scrollingSpeedometer;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) BOOL isPerformingInitialChanges; // @synthesize isPerformingInitialChanges=_isPerformingInitialChanges;
@property(readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus; // @synthesize analysisStatus=_analysisStatus;
@property(readonly, nonatomic) UXBarButtonItem *navigationDisplayModeButtonItem; // @synthesize navigationDisplayModeButtonItem=_navigationDisplayModeButtonItem;
@property(readonly, nonatomic) CDStruct_15189878 selectedAssetsTypedCount; // @synthesize selectedAssetsTypedCount=_selectedAssetsTypedCount;
@property(readonly, nonatomic) id <PXFilterState> allPhotosFilterState; // @synthesize allPhotosFilterState=_allPhotosFilterState;
@property(readonly, nonatomic) id <PXFilterState> currentFilterState; // @synthesize currentFilterState=_currentFilterState;
@property(readonly, nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) NSString *selectModeCaption; // @synthesize selectModeCaption=_selectModeCaption;
@property(readonly, nonatomic) unsigned long long libraryState; // @synthesize libraryState=_libraryState;
@property(readonly, nonatomic) NSSet *draggedAssetReferences; // @synthesize draggedAssetReferences=_draggedAssetReferences;
@property(readonly, nonatomic) PXCuratedLibraryAssetCollectionSkimmingInfo *skimmingInfo; // @synthesize skimmingInfo=_skimmingInfo;
@property(nonatomic) struct CGPoint lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(nonatomic) long long scrollRegime; // @synthesize scrollRegime=_scrollRegime;
@property(readonly, nonatomic) BOOL allPhotosLayoutIsAnimating; // @synthesize allPhotosLayoutIsAnimating=_allPhotosLayoutIsAnimating;
@property(readonly, nonatomic) BOOL allPhotosCaptionsVisible; // @synthesize allPhotosCaptionsVisible=_allPhotosCaptionsVisible;
@property(readonly, nonatomic) BOOL allPhotosAspectFit; // @synthesize allPhotosAspectFit=_allPhotosAspectFit;
@property(readonly, nonatomic) PXAssetReference *allPhotosAnchorAssetReference; // @synthesize allPhotosAnchorAssetReference=_allPhotosAnchorAssetReference;
@property(nonatomic) CDStruct_9b94aa0b allPhotosZoomState; // @synthesize allPhotosZoomState=_allPhotosZoomState;
@property(readonly, nonatomic) NSArray *allPhotosAllowedColumnWidths; // @synthesize allPhotosAllowedColumnWidths=_allPhotosAllowedColumnWidths;
@property(retain, nonatomic) NSArray *allPhotosAllowedColumns; // @synthesize allPhotosAllowedColumns=_allPhotosAllowedColumns;
@property(readonly, nonatomic) double interactiveZoomColumnIndex; // @synthesize interactiveZoomColumnIndex=_interactiveZoomColumnIndex;
@property(readonly, nonatomic) BOOL isInteractiveZooming; // @synthesize isInteractiveZooming=_isInteractiveZooming;
@property(readonly, nonatomic) double daysMarginScale; // @synthesize daysMarginScale=_daysMarginScale;
@property(readonly, nonatomic) CDStruct_7c4e768e pinchState; // @synthesize pinchState=_pinchState;
@property(readonly, nonatomic) BOOL isPinching; // @synthesize isPinching=_isPinching;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) BOOL isSelecting; // @synthesize isSelecting=_isSelecting;
@property(readonly, nonatomic) BOOL viewBasedDecorationsEnabled; // @synthesize viewBasedDecorationsEnabled=_viewBasedDecorationsEnabled;
@property(readonly, nonatomic) BOOL wantsDarkStatusBar; // @synthesize wantsDarkStatusBar=_wantsDarkStatusBar;
@property(nonatomic) BOOL wantsSecondaryToolbarVisible; // @synthesize wantsSecondaryToolbarVisible=_wantsSecondaryToolbarVisible;
@property(nonatomic) BOOL wantsToolbarVisible; // @synthesize wantsToolbarVisible=_wantsToolbarVisible;
@property(nonatomic) BOOL wantsTabBarVisible; // @synthesize wantsTabBarVisible=_wantsTabBarVisible;
@property(readonly, nonatomic) long long zoomLevelTransitionPhase; // @synthesize zoomLevelTransitionPhase=_zoomLevelTransitionPhase;
@property(readonly, nonatomic) BOOL isAppearing; // @synthesize isAppearing=_isAppearing;
@property(readonly, nonatomic) NSSet *allowedActions; // @synthesize allowedActions=_allowedActions;
@property(readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PXAssetsDataSource *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide; // @synthesize styleGuide=_styleGuide;
@property(readonly, nonatomic) PXCuratedLibraryLayoutSpecManager *specManager; // @synthesize specManager=_specManager;
- (void)_systemPhotoLibraryDidChange;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1;
- (void)_handleSpecChange;
- (void)_handleSelectionManagerChange:(unsigned long long)arg1;
- (void)_handleIsSelectingChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)curatedLibraryAssetsDataSourceManager:(id)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (id)curatedLibraryAssetsDataSourceManager:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (void)curatedLibraryAssetsDataSourceManager:(id)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)curatedLibraryAssetsDataSourceManager:(id)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (id)visibleAssetCollectionsFromCuratedLibraryAssetsDataSourceManager:(id)arg1;
- (BOOL)isSelectingAssetsFromCuratedLibraryAssetsDataSourceManager:(id)arg1;
- (id)_cpAnalyticsClassNameWithZoomLevel:(long long)arg1;
- (void)endCPAnalyticsViewWithZoomLevel:(long long)arg1;
- (void)startCPAnalyticsViewWithZoomLevel:(long long)arg1;
- (void)_updateAllPhotosZoomState;
- (void)_invalidateAllPhotosZoomState;
- (void)_updateAllPhotosAlphaAnimator;
- (void)_invalidateAllPhotosAlphaAnimator;
- (void)_updatePinchVelocity;
- (void)_invalidatePinchVelocity;
- (void)_updateAllPhotosAllowedColumns;
- (void)_invalidateAllPhotosAllowedColumns;
- (void)_updateScrollingProperties;
- (void)_invalidateScrollingProperties;
- (void)_updateScrollingSpeedometer;
- (void)_invalidateScrollingSpeedometer;
- (void)setAllowedActions:(id)arg1;
- (void)_updateAllowedActions;
- (void)_invalidateAllowedActions;
@property(readonly, nonatomic) BOOL isAnimatingChromeVisibility;
- (void)_updateChromeVisibility;
- (void)_invalidateChromeVisibility;
- (void)_updateDraggedAssetReferences;
- (void)_invalidateDraggedAssetReferences;
- (void)_updateSelectModeCaption;
- (void)_invalidateSelectModeCaption;
- (void)setSelectedAssetsTypedCount:(CDStruct_15189878)arg1;
- (void)_invalidateSelectedAssetsTypedCount;
- (void)_updateCurrentFilterState;
- (void)_invalidateCurrentFilterState;
- (void)_updateLibraryState;
- (void)_invalidateLibraryState;
- (void)_updateAssetsDataSourceManager;
- (void)_invalidateAssetsDataSourceManager;
- (void)_updateCurrentDataSource;
- (void)_invalidateCurrentDataSource;
- (void)_invalidateAssetActionManager;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (void)setCplServiceUI:(id)arg1;
@property(readonly, nonatomic) PXCPLServiceUI *cplServiceUI;
- (void)setAllPhotosLayoutIsAnimating:(BOOL)arg1;
- (void)setAllPhotosCaptionsVisible:(BOOL)arg1;
@property(readonly, nonatomic) BOOL allPhotosPresentingAspectFit;
- (void)setAllPhotosAspectFit:(BOOL)arg1;
- (double)_columnIndexForItemWidth:(double)arg1;
- (void)resetAllPhotosColumns;
- (double)_columnWidthForDesiredColumnIndex:(double)arg1;
- (long long)_closestColumnIndexForColumnWidth:(double)arg1;
- (long long)_closestColumnIndexForAnimatedValue:(double)arg1;
- (long long)_nextColumnIndexForInitialColumnWidth:(double)arg1 currentColumnWidth:(double)arg2 velocity:(double)arg3;
- (long long)_clampColumnIndexToValidIndex:(long long)arg1;
- (void)zoomInAllPhotosToLastRememberedWithAnchorAssetReference:(id)arg1 animated:(BOOL)arg2;
- (void)zoomAllPhotosToColumnIndex:(long long)arg1 withAnchorAssetReference:(id)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) BOOL allPhotosIsDisplayingIndividualItems;
- (long long)_allPhotosMaxColumnsForIndividualItems;
- (long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1;
- (id)_indexPathsForAssetCollectionReference:(id)arg1;
- (void)toggleSelectionForAssetCollectionReference:(id)arg1;
- (void)toggleSelectionForAssetReference:(id)arg1;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath)arg1;
@property(readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
- (void)setNavigationDisplayModeButtonItem:(id)arg1;
- (void)setAllPhotosFilterState:(id)arg1;
- (void)setCurrentFilterState:(id)arg1;
- (void)setZoomLevel:(long long)arg1;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
@property(readonly, nonatomic) NSArray *views;
@property(readonly, nonatomic) NSSet *visibleAssetCollections;
@property(readonly, nonatomic) id <PXCuratedLibraryViewModelPresenter> mainPresenter;
- (void)removePresenter:(id)arg1;
- (void)addPresenter:(id)arg1;
@property(readonly, nonatomic) NSArray *presenters;
- (void)setSelectModeCaption:(id)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setSkimmingInfo:(id)arg1;
- (void)setLibraryState:(unsigned long long)arg1;
- (void)setInteractiveZoomColumnIndex:(double)arg1 withAnchorAssetReference:(id)arg2;
- (void)setIsInteractiveZooming:(BOOL)arg1;
- (void)setDaysMarginScale:(double)arg1;
- (void)setPinchState:(CDStruct_7c4e768e)arg1 withAnchorAssetReference:(id)arg2;
- (void)setIsPinching:(BOOL)arg1;
- (void)endAnimationToToggleChromeVisibility;
- (void)startAnimationToToggleChromeVisibility;
- (void)setWantsDarkStatusBar:(BOOL)arg1;
- (void)setIsSelecting:(BOOL)arg1;
- (void)setViewBasedDecorationsEnabled:(BOOL)arg1;
- (void)setZoomLevelTransitionPhase:(long long)arg1;
- (void)setIsAppearing:(BOOL)arg1;
- (void)performInitialChanges:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
@property(readonly, copy) NSString *description;
- (id)initWithAssetsDataSourceManagerConfiguration:(id)arg1 zoomLevel:(long long)arg2 specManager:(id)arg3 styleGuide:(id)arg4;
- (id)initWithPhotoLibrary:(id)arg1 zoomLevel:(long long)arg2 specManager:(id)arg3 styleGuide:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

