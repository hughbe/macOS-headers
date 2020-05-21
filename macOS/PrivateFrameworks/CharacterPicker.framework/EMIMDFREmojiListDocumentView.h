//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CharacterPicker/NSGestureRecognizerDelegate-Protocol.h>

@class EMIMDFREmojiListCoupleSkinToneView, EMIMDFREmojiListSkinToneView, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EMIMDFREmojiListDocumentView : NSView <NSGestureRecognizerDelegate>
{
    BOOL _gestureCanceled;
    BOOL _scrollingByExternalTrigger;
    BOOL _scrollingStartAtCollapsedEdge;
    NSMutableArray *_labelViews;
    NSMutableArray *_characterViews;
    long long _topVisibleCategoryIndex;
    id _firstTouchID;
    long long _highlightedCategoryIndex;
    long long _highlightedCharacterIndex;
    EMIMDFREmojiListSkinToneView *_skinToneView;
    EMIMDFREmojiListCoupleSkinToneView *_coupleSkinToneView;
}

@property(retain) EMIMDFREmojiListCoupleSkinToneView *coupleSkinToneView; // @synthesize coupleSkinToneView=_coupleSkinToneView;
@property(retain) EMIMDFREmojiListSkinToneView *skinToneView; // @synthesize skinToneView=_skinToneView;
@property BOOL scrollingStartAtCollapsedEdge; // @synthesize scrollingStartAtCollapsedEdge=_scrollingStartAtCollapsedEdge;
@property BOOL scrollingByExternalTrigger; // @synthesize scrollingByExternalTrigger=_scrollingByExternalTrigger;
@property long long highlightedCharacterIndex; // @synthesize highlightedCharacterIndex=_highlightedCharacterIndex;
@property long long highlightedCategoryIndex; // @synthesize highlightedCategoryIndex=_highlightedCategoryIndex;
@property BOOL gestureCanceled; // @synthesize gestureCanceled=_gestureCanceled;
@property(retain) id firstTouchID; // @synthesize firstTouchID=_firstTouchID;
@property long long topVisibleCategoryIndex; // @synthesize topVisibleCategoryIndex=_topVisibleCategoryIndex;
@property(retain) NSMutableArray *characterViews; // @synthesize characterViews=_characterViews;
@property(retain) NSMutableArray *labelViews; // @synthesize labelViews=_labelViews;
- (id)_selectingCharacter;
- (void)_showPreviewWindow:(id)arg1;
- (void)_highlightCharacterWithTouch:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)scrollToPointProgrammatically:(double)arg1;
- (void)scrollToCategory:(long long)arg1;
- (id)_characterMatrixViewForIndex:(long long)arg1;
- (id)_labelForIndex:(long long)arg1;
- (void)dealloc;
- (void)_sencondaryInitForChildViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

