//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRCroppingSpriteVBO : NSObject
{
    struct CGPoint mPosition;
    struct CGSize mHalfSize;
    float mRotation;
    struct CGRect mInnerRect;
    struct CGRect mOuterRect;
    BOOL mPreservesImageAspectRatio;
    BOOL mHitIsActive;
    BOOL mNeedsInSpriteCoordinates;
    struct CGSize mSpriteCoordinatesFactor;
    struct CGPoint mSpriteCoordinatesOffset;
    unsigned char mMeshType;
    unsigned int mVBO;
    unsigned char mMiddleOffset;
    unsigned char mOuterOffset;
    unsigned char mNumberOfVertices;
    BOOL mPositionWasUpdated;
    BOOL mRectsWereUpdated;
}

@property(nonatomic) unsigned char meshType; // @synthesize meshType=mMeshType;
@property(nonatomic) struct CGPoint spriteCoordinatesOffset; // @synthesize spriteCoordinatesOffset=mSpriteCoordinatesOffset;
@property(nonatomic) struct CGSize spriteCoordinatesFactor; // @synthesize spriteCoordinatesFactor=mSpriteCoordinatesFactor;
@property(nonatomic) BOOL needsInSpriteCoordinates; // @synthesize needsInSpriteCoordinates=mNeedsInSpriteCoordinates;
@property(nonatomic) BOOL hitIsActive; // @synthesize hitIsActive=mHitIsActive;
@property(nonatomic) BOOL preservesImageAspectRatio; // @synthesize preservesImageAspectRatio=mPreservesImageAspectRatio;
@property(nonatomic) struct CGRect outerRect; // @synthesize outerRect=mOuterRect;
@property(nonatomic) struct CGRect innerRect; // @synthesize innerRect=mInnerRect;
@property(readonly, nonatomic) float rotation; // @synthesize rotation=mRotation;
@property(readonly, nonatomic) struct CGSize halfSize; // @synthesize halfSize=mHalfSize;
@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=mPosition;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2;
- (BOOL)hitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderImageOuter:(id)arg1 inContext:(id)arg2;
- (void)renderImageMiddle:(id)arg1 inContext:(id)arg2;
- (void)renderImageInner:(id)arg1 inContext:(id)arg2;
- (void)updateVBOsInContext:(id)arg1;
- (void)getOpaquePosition:(struct CGPoint *)arg1 andHalfSize:(struct CGSize *)arg2;
- (void)fakeRenderInContext:(id)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (void)reset;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 innerRect:(struct CGRect)arg4 outerRect:(struct CGRect)arg5 context:(id)arg6;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 innerRect:(struct CGRect)arg4 context:(id)arg5;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 context:(id)arg4;
- (id)init;

@end

