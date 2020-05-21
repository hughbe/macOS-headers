//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUUID, _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject
{
    _IDSDataChannelLinkContext *_internal;
}

- (void).cxx_destruct;
@property(readonly) unsigned short localLinkFlags;
@property(readonly) unsigned short remoteLinkFlags;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setMTU:(unsigned short)arg1;
- (void)setRATType:(unsigned int)arg1;
@property(readonly) BOOL serverIsDegraded;
@property(readonly) NSData *relaySessionKey;
@property(readonly) NSData *relaySessionToken;
@property(readonly) long long relayServerProvider;
@property(readonly) unsigned int remoteRATType;
@property(readonly) long long remoteConnectionType;
@property(readonly) unsigned char remoteNetworkType;
@property(readonly) unsigned int maxBitrate;
@property(readonly) unsigned short maxMTU;
@property(readonly) unsigned int RATType;
@property(readonly) long long connectionType;
@property(readonly) unsigned char networkType;
@property(readonly) NSUUID *QRSessionID;
@property(readonly) NSUUID *linkUUID;
@property(readonly) BOOL linkID;
- (id)description;
- (id)initWithAttributes:(CDStruct_0310362a *)arg1 maxBitrate:(unsigned int)arg2 relayServerProvider:(long long)arg3 relaySessionToken:(id)arg4 relaySessionKey:(id)arg5;
- (id)initWithLinkID:(BOOL)arg1 linkUUID:(id)arg2 QRSessionID:(id)arg3 networkType:(unsigned char)arg4 connectionType:(long long)arg5 RATType:(unsigned int)arg6 MTU:(unsigned short)arg7 remoteNetworkType:(unsigned char)arg8 remoteConnectionType:(long long)arg9 remoteRATType:(unsigned int)arg10 maxBitrate:(unsigned int)arg11 relayServerProvider:(long long)arg12 relaySessionToken:(id)arg13 relaySessionKey:(id)arg14 serverIsDegraded:(BOOL)arg15;
- (id)initWithDummyInformation;

@end

