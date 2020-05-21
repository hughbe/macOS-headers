//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSCollectionViewDataSource-Protocol.h>
#import <AppKit/NSCollectionViewDelegate-Protocol.h>
#import <AppKit/NSTouchBarColorPickerView-Protocol.h>

@class NSArray, NSCollectionView, NSColor, NSString;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerFavorites : NSControl <NSCollectionViewDelegate, NSCollectionViewDataSource, NSTouchBarColorPickerView>
{
    NSCollectionView *_collectionView;
    NSColor *_currentColor;
    NSArray *_savedColors;
    NSArray *_allowedColorSpaces;
    BOOL _allowsAlpha;
}

+ (long long)preferredColorSwatchType;
@property BOOL allowsAlpha; // @synthesize allowsAlpha=_allowsAlpha;
@property(copy) NSColor *currentColor; // @synthesize currentColor=_currentColor;
@property(copy) NSArray *allowedColorSpaces;
- (void)_favoritesDidChange:(id)arg1;
- (void)setSavedColors:(id)arg1;
- (id)savedColors;
- (struct CGSize)intrinsicContentSize;
- (void)showMostRecentSavedColor;
- (void)dealloc;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly) NSArray *presentedColors;

// Remaining properties
@property SEL action;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property __weak id target;

@end

