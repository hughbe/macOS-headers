//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAImageGeometry-Protocol.h>
#import <PhotosImagingFoundation/IPAQuadGeometry-Protocol.h>

@class NSString;

@interface IPAImageGeometry : NSObject <IPAQuadGeometry, IPAImageGeometry>
{
    NSString *_identifier;
    struct CGRect _extent;
    struct CGRect _domain;
    struct Quad2d _imageQuad;
}

+ (id)inputGeometryWithImageSize:(struct CGSize)arg1;
+ (void)addLineFromP0:(struct CGPoint)arg1 P1:(struct CGPoint)arg2 withLabel:(id)arg3 toScene:(id)arg4;
+ (void)addPoint:(struct CGPoint)arg1 radius:(double)arg2 withLabel:(id)arg3 toScene:(id)arg4;
+ (void)addQuadV0:(struct CGPoint)arg1 V1:(struct CGPoint)arg2 V2:(struct CGPoint)arg3 V3:(struct CGPoint)arg4 withLabel:(id)arg5 toScene:(id)arg6;
+ (void)addRect:(struct CGRect)arg1 withLabel:(id)arg2 toScene:(id)arg3;
+ (void)clearScene:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (struct Quad2d)imageQuad;
- (struct CGRect)extent;
- (struct CGRect)domain;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect)arg2;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect)arg2 domain:(struct CGRect)arg3;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect)arg2 imageQuad:(const struct Quad2d *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

