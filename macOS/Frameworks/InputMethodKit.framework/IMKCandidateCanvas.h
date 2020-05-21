//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKCandidateArrowView, IMKCandidateController, IMKCandidateGroupView, IMKCandidateSelectionView, IMKCandidateStepperView, IMKCandidateView, IMKClipView, NSTimer, NSView;

@interface IMKCandidateCanvas : NSObject
{
    IMKClipView *_canvasView;
    IMKCandidateArrowView *_arrowView;
    IMKCandidateView *_candidateView;
    IMKCandidateGroupView *_groupView;
    IMKCandidateSelectionView *_selectionView;
    IMKCandidateStepperView *_stepperView;
    IMKCandidateController *_candidateController;
    long long _canvasTypeForWindowType;
    struct CGSize _size;
    NSView *_informationView;
    NSTimer *_groupViewTimer;
    BOOL _groupViewVisibility;
    BOOL _currentWindowTypeIsSortable;
    BOOL _showSortingModes;
    unsigned long long _sortingSelectionIndex;
}

@property(nonatomic) BOOL showSortingModes; // @synthesize showSortingModes=_showSortingModes;
@property(nonatomic) unsigned long long sortingSelectionIndex; // @synthesize sortingSelectionIndex=_sortingSelectionIndex;
@property(readonly, nonatomic) BOOL currentWindowTypeIsSortable; // @synthesize currentWindowTypeIsSortable=_currentWindowTypeIsSortable;
@property(nonatomic) BOOL groupViewVisibility; // @synthesize groupViewVisibility=_groupViewVisibility;
@property(retain, nonatomic) NSTimer *groupViewTimer; // @synthesize groupViewTimer=_groupViewTimer;
@property(retain, nonatomic) NSView *informationView; // @synthesize informationView=_informationView;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long canvasTypeForWindowType; // @synthesize canvasTypeForWindowType=_canvasTypeForWindowType;
@property(nonatomic) IMKCandidateController *candidateController; // @synthesize candidateController=_candidateController;
@property(retain, nonatomic) IMKCandidateStepperView *stepperView; // @synthesize stepperView=_stepperView;
@property(retain, nonatomic) IMKCandidateSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) IMKCandidateGroupView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) IMKCandidateView *candidateView; // @synthesize candidateView=_candidateView;
@property(retain, nonatomic) IMKCandidateArrowView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) IMKClipView *canvasView; // @synthesize canvasView=_canvasView;
- (void)UITypeUpdated;
- (void)moveToPreviousSortingSelectionIndex;
- (void)moveToNextSortingSelectionIndex;
- (void)updateCandidateViewSize:(struct CGSize)arg1;
- (void)updateAfterSizeChange;
- (void)showInformationView;
- (void)startGroupViewTimer;
- (void)stopGroupViewTimer;
- (void)groupViewTimerFired:(id)arg1;
- (void)createGroupViewIfNeeded;
- (void)showAuxilliaryInformationViewAtBottom;
- (void)showArrowViewWithAnimation:(BOOL)arg1;
- (void)hideArrowViewWithAnimation:(BOOL)arg1;
- (void)updateStepperViewVisibility;
- (void)updateArrowViewVisibilityWithTarget:(id)arg1;
- (void)updateArrowViewVisibility;
- (void)removeAuxilliaryViews;
- (void)hideSelectionView;
- (void)showSelectionViewAtBottom;
- (void)showCandidateAndGroupView;
- (void)removeCandidateAndRelatedViews;
- (void)updateClipViewRadius;
- (void)showCandidateViewAtTop;
- (void)showCandidateViewAtTopWithBottomMargin:(double)arg1;
- (void)updateViewForWindowType;
- (void)updateConnections;
@property(readonly, nonatomic) BOOL layoutDirectionIsRTL;
- (void)nilOutConnectionsToCandidateController;
- (void)dealloc;
- (id)initWithCanvasView:(id)arg1 candidateController:(id)arg2;

@end

