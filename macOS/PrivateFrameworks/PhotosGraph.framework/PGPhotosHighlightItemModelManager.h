//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemListModelWriter-Protocol.h>
#import <PhotosGraph/PGHighlightItemModelReader-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, PHPhotoLibrary;

@interface PGPhotosHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter>
{
    unsigned short _kind;
    PHPhotoLibrary *_library;
    NSMutableDictionary *_visibilityStateByDayHighlighItemUUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *visibilityStateByDayHighlighItemUUID; // @synthesize visibilityStateByDayHighlighItemUUID=_visibilityStateByDayHighlighItemUUID;
@property(readonly, nonatomic) unsigned short kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
- (void)addVisibleHighlight:(id)arg1 inMonth:(id)arg2;
@property(readonly, nonatomic) NSSet *highlightUUIDsWithVisibilityStateChange;
- (unsigned short)visibilityStateForHighlightItem:(id)arg1;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id)arg2;
- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1;
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;
- (id)consumeHighlightItemList:(id)arg1;
- (id)initWithLibrary:(id)arg1 forKind:(unsigned short)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

