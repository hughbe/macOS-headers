//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferImageAdapter.h>

#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;
@protocol NUMutableBufferProvider;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage>
{
    id <NUMutableBufferProvider> _mutableBufferProvider;
}

- (void).cxx_destruct;
- (BOOL)copyBufferStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3;
- (BOOL)copySurfaceStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toPoint:(CDStruct_912cb5d2)arg3 device:(id)arg4;
- (void)writeBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithMutableBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;

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

