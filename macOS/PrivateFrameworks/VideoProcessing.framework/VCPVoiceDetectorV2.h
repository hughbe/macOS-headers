//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPVoiceDetector.h>

@interface VCPVoiceDetectorV2 : VCPVoiceDetector
{
    BOOL _voiceActivityNew;
    struct ComponentInstanceRecord *_audioUnit;
}

- (id)results;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;
- (int)loadModel;
- (int)setupWithAudioStream:(const struct AudioStreamBasicDescription *)arg1;
- (void)dealloc;
- (id)init;

@end

