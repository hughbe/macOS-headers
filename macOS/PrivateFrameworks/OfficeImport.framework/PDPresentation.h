//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCDDocument.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument
{
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize mSlideSize;
    struct CGSize mNotesSize;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsLooping;
    BOOL mIsKiosk;
    NSMutableArray *mCommentAuthors;
}

- (void).cxx_destruct;
- (id)description;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)ensureDefaultLayoutsForMasters;
- (void)flushUnusedMastersAndLayouts;
- (void)addCommentAuthor:(id)arg1;
- (id)commentAuthorAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentAuthorCount;
- (void)setIsKiosk:(BOOL)arg1;
- (BOOL)isKiosk;
- (void)setIsLooping:(BOOL)arg1;
- (BOOL)isLooping;
- (void)setIsCommentsVisible:(BOOL)arg1;
- (BOOL)isCommentsVisible;
- (void)setIsAutoPlay:(BOOL)arg1;
- (BOOL)isAutoPlay;
- (void)setNotesSize:(struct CGSize)arg1;
- (struct CGSize)notesSize;
- (void)setSlideSize:(struct CGSize)arg1;
- (struct CGSize)slideSize;
- (id)bulletBlips;
- (unsigned int)bulletBlipCount;
- (unsigned int)addBulletBlip:(id)arg1;
- (id)bulletBlipAtIndex:(int)arg1;
- (unsigned long long)indexOfSlide:(id)arg1;
- (void)addSlide:(id)arg1;
- (id)slideAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideCount;
- (void)addNotesMaster:(id)arg1;
- (id)notesMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)notesMasterCount;
- (void)addSlideMaster:(id)arg1;
- (id)slideMasterAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideMasterCount;
- (id)init;
- (void)cacheGraphicStylesForSlideBase:(id)arg1;
- (void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2;

@end

