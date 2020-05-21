//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVDepthData, NSDictionary, PVImageBuffer;

@interface PVCameraFrameSet : NSObject
{
    struct opaqueCMSampleBuffer *_colorSampleBuffer;
    AVDepthData *_depthData;
    NSDictionary *_metadata;
    PVImageBuffer *_alphaMaskImageBuffer;
    struct CGAffineTransform _colorTransform;
    struct CGAffineTransform _depthTransform;
}

- (void).cxx_destruct;
@property(retain) PVImageBuffer *alphaMaskImageBuffer; // @synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property(readonly, nonatomic) struct opaqueCMSampleBuffer *colorSampleBuffer; // @synthesize colorSampleBuffer=_colorSampleBuffer;
@property(nonatomic) struct CGAffineTransform depthTransform; // @synthesize depthTransform=_depthTransform;
@property(nonatomic) struct CGAffineTransform colorTransform; // @synthesize colorTransform=_colorTransform;
@property(readonly, nonatomic) PVImageBuffer *colorImageBuffer;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTimeStamp;
- (void)dealloc;
- (void)_sharedInitColorBuffer:(struct opaqueCMSampleBuffer *)arg1 colorTransform:(struct CGAffineTransform)arg2 depthData:(id)arg3 depthTransform:(struct CGAffineTransform)arg4 metadata:(id)arg5;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer *)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2;

@end

