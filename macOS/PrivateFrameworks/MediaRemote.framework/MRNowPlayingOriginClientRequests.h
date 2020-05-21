//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, _MROriginProtobuf;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSMutableArray *_nowPlayingClients;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableArray *_deviceInfoCompletions;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
- (void)restoreNowPlayingClientState;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleVolumeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleDeviceInfoRequestWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)transactionCallbackForName:(unsigned long long)arg1;
- (void)setTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
@property(retain, nonatomic) NSNumber *volume;
@property(retain, nonatomic) NSNumber *volumeCapabilities;
@property(copy, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
- (void)removeClient:(id)arg1;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)nowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)nowPlayingClients;
- (id)debugDescription;
- (id)initWithOrigin:(id)arg1;

@end

