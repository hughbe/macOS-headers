//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexSet;

@protocol PXGSpriteTexture <NSObject>
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly, nonatomic) unsigned int spriteCount;
- (BOOL)containsSpriteIndex:(unsigned int)arg1;
- (void)enumerateSpriteIndexes:(void (^)(unsigned int, char *))arg1;
- (void)getSpriteIndexes:(unsigned int *)arg1 maxSpriteCount:(unsigned int)arg2;
@end

