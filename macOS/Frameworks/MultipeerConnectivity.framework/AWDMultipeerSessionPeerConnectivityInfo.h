//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MultipeerConnectivity/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDMultipeerSessionPeerConnectivityInfo : PBCodable <NSCopying>
{
    unsigned long long _timeAll;
    unsigned long long _timeDTLS;
    unsigned long long _timeICE;
    unsigned long long _timeOSPF;
    unsigned long long _timestamp;
    int _channelPriority;
    unsigned int _interfaceType;
    NSString *_sessionID;
    BOOL _authentication;
    BOOL _encryption;
    BOOL _remoteAuthentication;
    struct {
        unsigned int timeAll:1;
        unsigned int timeDTLS:1;
        unsigned int timeICE:1;
        unsigned int timeOSPF:1;
        unsigned int timestamp:1;
        unsigned int channelPriority:1;
        unsigned int interfaceType:1;
        unsigned int authentication:1;
        unsigned int encryption:1;
        unsigned int remoteAuthentication:1;
    } _has;
}

@property(nonatomic) BOOL encryption; // @synthesize encryption=_encryption;
@property(nonatomic) BOOL remoteAuthentication; // @synthesize remoteAuthentication=_remoteAuthentication;
@property(nonatomic) BOOL authentication; // @synthesize authentication=_authentication;
@property(nonatomic) int channelPriority; // @synthesize channelPriority=_channelPriority;
@property(nonatomic) unsigned long long timeAll; // @synthesize timeAll=_timeAll;
@property(nonatomic) unsigned long long timeOSPF; // @synthesize timeOSPF=_timeOSPF;
@property(nonatomic) unsigned long long timeDTLS; // @synthesize timeDTLS=_timeDTLS;
@property(nonatomic) unsigned long long timeICE; // @synthesize timeICE=_timeICE;
@property(nonatomic) unsigned int interfaceType; // @synthesize interfaceType=_interfaceType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEncryption;
@property(nonatomic) BOOL hasRemoteAuthentication;
@property(nonatomic) BOOL hasAuthentication;
@property(nonatomic) BOOL hasChannelPriority;
@property(nonatomic) BOOL hasTimeAll;
@property(nonatomic) BOOL hasTimeOSPF;
@property(nonatomic) BOOL hasTimeDTLS;
@property(nonatomic) BOOL hasTimeICE;
@property(nonatomic) BOOL hasInterfaceType;
@property(readonly, nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end

