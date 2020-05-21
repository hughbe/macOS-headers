//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImagingCore/NSCopying-Protocol.h>

@interface PACropModel : NSObject <NSCopying>
{
    struct Vector2d _imageCenter;
    struct CGRect _cropRect;
    BOOL _isAutoCrop;
    long long _orientation;
    double _straightenAngle;
    unsigned long long _hitVertexID;
    struct CGSize _masterImageSize;
    CDStruct_5e758c1a _aspectRatio;
}

+ (CDStruct_5e758c1a)freeFormAspectRatio;
- (id).cxx_construct;
@property(nonatomic) BOOL isAutoCrop; // @synthesize isAutoCrop=_isAutoCrop;
@property(readonly) unsigned long long hitVertexID; // @synthesize hitVertexID=_hitVertexID;
@property(nonatomic) CDStruct_5e758c1a aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property long long orientation; // @synthesize orientation=_orientation;
@property(readonly) struct CGSize masterImageSize; // @synthesize masterImageSize=_masterImageSize;
- (CDStruct_5e758c1a)originalAspectRatio;
- (BOOL)aspectRatioIsFreeForm;
- (BOOL)aspectRatioIsOriginal;
- (CDStruct_5e758c1a)_currentAspectRatio:(struct CGRect)arg1;
- (double)_currentAspectAsDouble:(struct CGRect)arg1;
- (void)makeCurrentFreeFormAspectFixed;
- (void)makeCurrentAspectRatioFreeForm;
- (unsigned long long)setAspectRatio:(CDStruct_5e758c1a)arg1 constrainCropRect:(struct CGRect)arg2 withTargetArea:(double)arg3;
- (unsigned long long)setStraightenAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2 startRect:(struct CGRect)arg3 startAngle:(double)arg4;
- (unsigned long long)setStraightenAngle:(double)arg1 constrainCropRectWithTargetArea:(double)arg2;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1 strict:(BOOL)arg2 startRect:(struct CGRect)arg3;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1 strict:(BOOL)arg2;
- (unsigned long long)constrainedMoveCropRectBy:(struct CGVector)arg1;
- (struct CGRect)getCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 straightenAngle:(double)arg3 constrainWithAnchorPoint:(struct CGPoint)arg4 strict:(BOOL)arg5 hitVertexId:(unsigned long long *)arg6;
- (struct CGRect)_expandedCropRectForZoom:(struct CGRect)arg1 candidateRect:(struct CGRect)arg2;
- (unsigned long long)setForZoomCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2;
- (unsigned long long)setCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 constrainWithAnchorPoint:(struct CGPoint)arg3 strict:(BOOL)arg4;
- (unsigned long long)setCropRect:(struct CGRect)arg1 newCropRect:(struct CGRect)arg2 constrainWithAnchorPoint:(struct CGPoint)arg3;
- (unsigned long long)setCropRect:(struct CGRect)arg1 constrainWithAnchorPoint:(struct CGPoint)arg2;
- (BOOL)imageContainsRect:(struct CGRect)arg1 withTol:(double)arg2;
- (BOOL)canGrowCropRect:(struct CGRect)arg1 constrainWithAnchorPoint:(struct CGPoint)arg2 strict:(BOOL)arg3 withTol:(double)arg4;
- (struct CGRect)_anchorAlignedRectFromCandidate:(struct CGRect)arg1 withAnchor:(struct CGPoint)arg2;
- (void)_debugPrintHitMask:(unsigned long long)arg1;
- (void)_debugPrintHitMask;
- (unsigned long long)_hitMaskFromRect:(struct CGRect)arg1 withTol:(double)arg2;
- (unsigned long long)_hitMaskFromRect:(struct CGRect)arg1;
- (void)_setCropRectWithConstantSize:(struct CGRect)arg1;
- (void)_setCropRect:(struct CGRect)arg1 anchor:(struct CGPoint)arg2;
- (void)_setCropRect:(struct CGRect)arg1;
@property struct CGRect cropRect;
- (struct CGRect)_integralCropRect:(struct CGRect)arg1 straightenAngle:(double)arg2 anchorPoint:(struct CGPoint)arg3;
- (struct CGRect)integralCropRect:(struct CGRect)arg1;
- (struct Quad2d)_getBoundingQuadFromAngle:(double)arg1 withExpansionTol:(double)arg2;
- (struct Quad2d)_getBoundingQuadFromAngle:(double)arg1;
- (struct Quad2d)_getBoundingQuad;
- (BOOL)_hasDefaultValues;
- (void)_setToDefaultValues;
- (struct CGRect)_defaultCropRect;
- (struct Vector2d)_defaultImageCenter;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToCropModel:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL hasCrop;
- (void)reset;
- (id)initWithMasterImageSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (id)init;

@end

