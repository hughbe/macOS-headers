//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
@property(readonly, nonatomic) _MRPlaybackSessionProtobuf *playbackSession;
- (id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3;

@end

