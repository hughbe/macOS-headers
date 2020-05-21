//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
{
}

- (void)_loadMiscConfig:(id)arg1;
- (BOOL)_loadConfig:(id)arg1 cipherCuite:(id)arg2;
- (void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3;
- (BOOL)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id *)arg2;
- (BOOL)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (BOOL)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2;
- (BOOL)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id *)arg2 audioStreamConfig:(id *)arg3;

@end

