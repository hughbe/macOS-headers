//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AVCVideoFrame : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_depthPixelBuffer;
    CDStruct_1b6d18a9 _time;
    NSData *_imageData;
    NSData *_effectsMetadata;
    float _renderProcessTime;
    id _delegate;
}

@property(nonatomic) struct __CVBuffer *depthPixelBuffer; // @synthesize depthPixelBuffer=_depthPixelBuffer;
@property float renderProcessTime; // @synthesize renderProcessTime=_renderProcessTime;
@property(retain) NSData *effectsMetadata; // @synthesize effectsMetadata=_effectsMetadata;
@property(retain) NSData *imageData; // @synthesize imageData=_imageData;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (id)delegate;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4 delegate:(id)arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 imageData:(id)arg3;

@end

