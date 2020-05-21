//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

#import <InputMethodKit/NSAccessibilityList-Protocol.h>

@class IMKUIAbstractCandidateLayout, IMKUICandidateCollectionDocumentView, IMKUICandidateGroupView, IMKUICandidateLayoutTraits, IMKUIScrollView, IMKUITextField, NSArray, NSMutableDictionary, NSString;
@protocol IMKUICandidateAccessibilityDelegate, IMKUICandidateItemViewHandling, IMKUICandidateListViewState;

@interface IMKUICandidateListView : NSVisualEffectView <NSAccessibilityList>
{
    id <IMKUICandidateAccessibilityDelegate> _accessibilityController;
    IMKUIAbstractCandidateLayout *_candidateLayout;
    id <IMKUICandidateItemViewHandling> _delegate;
    IMKUICandidateCollectionDocumentView *_documentView;
    struct CGSize _extraSize;
    IMKUICandidateGroupView *_groupView;
    unsigned long long _firstLine;
    IMKUICandidateLayoutTraits *_layoutTraits;
    NSArray *_linesToShow;
    NSString *_noCandidatesMessage;
    IMKUITextField *_noCandidatesTextField;
    NSMutableDictionary *_numberToLineMapping;
    IMKUIScrollView *_scrollView;
    BOOL _showsNoCandidatesMessage;
    BOOL _showsScrollBars;
    id <IMKUICandidateListViewState> _stateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IMKUICandidateListViewState> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property(nonatomic) BOOL showsScrollBars; // @synthesize showsScrollBars=_showsScrollBars;
@property(nonatomic) BOOL showsNoCandidatesMessage; // @synthesize showsNoCandidatesMessage=_showsNoCandidatesMessage;
@property(retain, nonatomic) IMKUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableDictionary *numberToLineMapping; // @synthesize numberToLineMapping=_numberToLineMapping;
@property(retain, nonatomic) IMKUITextField *noCandidatesTextField; // @synthesize noCandidatesTextField=_noCandidatesTextField;
@property(copy, nonatomic) NSString *noCandidatesMessage; // @synthesize noCandidatesMessage=_noCandidatesMessage;
@property(retain, nonatomic) NSArray *linesToShow; // @synthesize linesToShow=_linesToShow;
@property(retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits; // @synthesize layoutTraits=_layoutTraits;
@property(nonatomic) unsigned long long firstLine; // @synthesize firstLine=_firstLine;
@property(retain, nonatomic) IMKUICandidateGroupView *groupView; // @synthesize groupView=_groupView;
@property(nonatomic) struct CGSize extraSize; // @synthesize extraSize=_extraSize;
@property(retain, nonatomic) IMKUICandidateCollectionDocumentView *documentView; // @synthesize documentView=_documentView;
@property(nonatomic) __weak id <IMKUICandidateItemViewHandling> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMKUIAbstractCandidateLayout *candidateLayout; // @synthesize candidateLayout=_candidateLayout;
@property(nonatomic) __weak id <IMKUICandidateAccessibilityDelegate> accessibilityController; // @synthesize accessibilityController=_accessibilityController;
- (long long)accessibilityOrientation;
- (id)accessibilityRows;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)convertedFrameForCandidateFrame:(struct CGRect)arg1;
- (id)accessibilitySelectedChildren;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilityVisibleChildren;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityTitle;
- (struct CGSize)sizeAllowanceForScrollers;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSArray *visibleLineIndices;
- (id)groupTitleForLineWithIndex:(long long)arg1;
- (id)viewForLineWithIndex:(long long)arg1 frame:(struct CGRect)arg2;
- (id)visibleAreasForFrame:(struct CGRect)arg1;
- (struct CGRect)documentViewFrameWithContentSize:(struct CGSize)arg1;
- (void)removeTrailingViews;
- (void)updateGroupView;
- (void)didUpdateViewBounds;
- (void)scrollViewDidUpdateBounds;
- (struct CGRect)groupViewFrameWithVisibility:(BOOL)arg1;
@property(readonly, nonatomic) BOOL showsGroups;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

