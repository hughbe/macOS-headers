//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLResourceSPI-Protocol.h>
#import <MetalTools/MTLTexture-Protocol.h>

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>
@property(readonly) BOOL isDrawable;
@property(readonly) unsigned long long numFaces;
@property(readonly) unsigned int swizzleKey;
@property(readonly) unsigned long long iosurfacePlane;
@property(readonly) struct __IOSurface *iosurface;
- (void)didModifyData;

@optional
@property(nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long uniqueIdentifier;
@end

