//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString;

@protocol VCSessionDownlinkBandwidthAllocatorClient
@property(nonatomic, getter=isVideoSuspended) BOOL videoSuspended;
@property(readonly) BOOL isVisible;
@property(readonly) unsigned int prominenceIndex;
@property(readonly) unsigned int visibilityIndex;
@property(readonly) unsigned char videoQuality;
@property(readonly) unsigned short activeDownlinkAudioStreamID;
@property(readonly) unsigned short activeDownlinkVideoStreamID;
@property(readonly) NSNumber *optedInAudioStreamID;
@property(readonly) NSNumber *optedInVideoStreamID;
@property(readonly) unsigned int optedInNetworkBitrateAudio;
@property(readonly) unsigned int optedInNetworkBitrateVideo;
@property(readonly) unsigned int actualNetworkBitrateAudio;
@property(readonly) unsigned int actualNetworkBitrateVideo;
@property(readonly) NSArray *mediaEntries;
@property(readonly) NSString *uuid;
@end

