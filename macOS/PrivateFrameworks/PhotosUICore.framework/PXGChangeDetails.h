//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSIndexSet, NSString, PXArrayChangeDetails;

@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider>
{
    unsigned int *_nextSpriteIndexByPreviousSpriteIndex;
    long long _nextSpriteIndexByPreviousSpriteIndexCapacity;
    NSIndexSet *_spriteIndexesThatWereRemoved;
    NSIndexSet *_spriteIndexesThatWereInserted;
    NSIndexSet *_spriteIndexesThatWereModified;
    BOOL _hasMoves;
    char *_tempBuffer;
    long long _tempBufferCapacity;
    PXArrayChangeDetails *_cachedArrayChangeDetails;
    unsigned int _numberOfSpritesAfterChange;
    unsigned int _numberOfSpritesBeforeChange;
    long long _layoutVersionBeforeChange;
    long long _layoutVersionAfterChange;
}

- (void).cxx_destruct;
@property(nonatomic) long long layoutVersionAfterChange; // @synthesize layoutVersionAfterChange=_layoutVersionAfterChange;
@property(nonatomic) long long layoutVersionBeforeChange; // @synthesize layoutVersionBeforeChange=_layoutVersionBeforeChange;
@property(readonly, nonatomic) unsigned int numberOfSpritesBeforeChange; // @synthesize numberOfSpritesBeforeChange=_numberOfSpritesBeforeChange;
@property(readonly, nonatomic) unsigned int numberOfSpritesAfterChange; // @synthesize numberOfSpritesAfterChange=_numberOfSpritesAfterChange;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails;
- (void)_invalidateCachedArrayChangeDetails;
- (void)applyToDictionary:(id)arg1 removalHandler:(CDUnknownBlockType)arg2;
- (void)applyToArray:(void *)arg1 elementSize:(unsigned long long)arg2 countAfterChanges:(unsigned long long)arg3 insertionHandler:(CDUnknownBlockType)arg4 modifiedHandler:(CDUnknownBlockType)arg5;
- (void)applyToSpriteIndexes:(unsigned int *)arg1 atIndexes:(id)arg2;
- (id)indexSetAfterApplyingChangeDetails:(id)arg1;
@property(readonly, nonatomic) const unsigned int *spriteIndexAfterChangeBySpriteIndexBeforeChange;
@property(readonly, nonatomic) NSIndexSet *modifiedSpriteIndexes;
@property(readonly, nonatomic) NSIndexSet *insertedSpriteIndexes;
@property(readonly, nonatomic) NSIndexSet *removedSpriteIndexes;
@property(readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
- (void)_resizeStorageIfNeeded;
- (void)_invalidateLayoutVersions;
@property(readonly, nonatomic) PXGChangeDetails *inverse;
- (void)applySpriteTransferMap:(const unsigned int *)arg1;
- (struct _PXGSpriteIndexRange)splitIndexesIntoMovesToEndAndReinsertions:(id)arg1;
- (void)increaseNumberOfSpritesBy:(unsigned int)arg1;
- (void)removeSpritesAtIndexes:(id)arg1;
- (struct _PXGSpriteIndexRange)replaceRemovalsWithMovesToEndForIndexes:(id)arg1;
- (void)configureWithNumberOfSpritesAfterChange:(unsigned int)arg1 changeDetails:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

