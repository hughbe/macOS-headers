//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput
{
    AVCaptureDeviceInputInternal *_internal;
    BOOL _unifiedAutoExposureDefaultsEnabled;
}

+ (id)deviceInputWithDevice:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(nonatomic) BOOL unifiedAutoExposureDefaultsEnabled; // @synthesize unifiedAutoExposureDefaultsEnabled=_unifiedAutoExposureDefaultsEnabled;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg1;
- (struct OpaqueCMClock *)inputClock;
- (void)sessionWillUseOutputDecompressionOptions:(id)arg1 forPort:(id)arg2;
- (int)clockProviderNodeForInputPort:(id)arg1;
- (unsigned int)unitOutputNumberForInputPort:(id)arg1;
- (int)graphNodeForInputPort:(id)arg1;
- (void)removeInputUnitsForInputPort:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addInputUnitsForInputPort:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
@property(nonatomic) CDStruct_1b6d18a9 videoMinFrameDurationOverride;
- (id)portsWithMediaType:(id)arg1 sourceDeviceType:(id)arg2 sourceDevicePosition:(long long)arg3;
- (id)ports;
- (id)notReadyError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) AVCaptureDevice *device;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (id)description;

@end

