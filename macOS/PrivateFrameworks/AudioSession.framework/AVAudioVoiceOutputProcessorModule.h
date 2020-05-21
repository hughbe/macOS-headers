//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioSession/AVAudioVoiceOutputProcessing-Protocol.h>

@class AVAudioVoiceProcessorCommonControlsModule, NSString;

@interface AVAudioVoiceOutputProcessorModule : NSObject <AVAudioVoiceOutputProcessing>
{
}

- (BOOL)setMaximumOutputPacketByteSize:(unsigned int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int maximumOutputPacketByteSize;
- (BOOL)muteDownlink:(BOOL)arg1 error:(id)arg2;
@property(readonly, nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;
@property(readonly, nonatomic) AVAudioVoiceProcessorCommonControlsModule *commonControls;
- (BOOL)enable:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

