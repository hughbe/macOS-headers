//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSArray, NSDictionary;

@interface VNFaceRegionMap : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>
{
    unsigned long long _requestRevision;
    struct vImage_Buffer _regionMap;
    struct CGRect _userBBox;
    struct _Geometry2D_rect2D_ _internalAlignedBBox;
    BOOL _deallocateBuffer;
    NSDictionary *_pixelValueToRegionLabelMap;
    NSArray *_regionLabels;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *regionLabels; // @synthesize regionLabels=_regionLabels;
- (id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint)arg1;
- (id)regionNameAtImageCoordinate:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint)arg1;
- (id)getRegionLabels;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRequestRevision:(unsigned long long)arg1 regionMap:(struct vImage_Buffer *)arg2 deallocateBuffer:(BOOL)arg3 userBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 valueToLabelMap:(id)arg6;

@end

