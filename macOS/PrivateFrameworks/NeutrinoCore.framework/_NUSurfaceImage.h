//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUBufferImage.h>

#import <NeutrinoCore/NUMutablePurgeableSurfaceImage-Protocol.h>
#import <NeutrinoCore/NUMutableSurfaceImage-Protocol.h>
#import <NeutrinoCore/NUPurgeableSurfaceImage-Protocol.h>
#import <NeutrinoCore/NUSurfaceImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;

@interface _NUSurfaceImage : _NUBufferImage <NUSurfaceImage, NUMutableSurfaceImage, NUPurgeableSurfaceImage, NUMutablePurgeableSurfaceImage>
{
}

- (BOOL)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (void)writeTextureRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)readTextureRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)writeSurfaceRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)readSurfaceRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly) NUColorSpace *colorSpace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly) NUImageLayout *layout;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;
@property(readonly, copy) NURegion *validRegion;

@end

