//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class NSMutableArray, OITSUNoCopyDictionary, PDNotesSlide, PDSlideLayout;

__attribute__((visibility("hidden")))
@interface PDSlide : PDSlideChild
{
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
    OITSUNoCopyDictionary *mCommentParents;
}

- (void).cxx_destruct;
- (id)description;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)transition;
- (id)background;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (void)doneWithContent;
@property(retain) OITSUNoCopyDictionary *commentParents; // @synthesize commentParents=mCommentParents;
- (id)commentForAuthorId:(unsigned long long)arg1 authorIdx:(unsigned long long)arg2;
- (void)addComment:(id)arg1;
- (id)commentAtIndex:(unsigned long long)arg1;
- (unsigned long long)commentCount;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (void)setNotesSlide:(id)arg1;
- (id)notesSlide;
- (id)defaultTheme;
- (void)setSlideLayout:(id)arg1;
- (id)slideLayout;

@end

