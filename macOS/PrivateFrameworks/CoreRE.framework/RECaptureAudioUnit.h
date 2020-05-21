//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer, NSString;

__attribute__((visibility("hidden")))
@interface RECaptureAudioUnit : AUAudioUnit
{
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
    NSString *_captureName;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *captureName; // @synthesize captureName=_captureName;
- (CDUnknownBlockType)internalRenderBlock;
- (id)channelCapabilities;
- (id)outputBusses;
- (id)inputBusses;
- (void)deallocateRenderResources;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

