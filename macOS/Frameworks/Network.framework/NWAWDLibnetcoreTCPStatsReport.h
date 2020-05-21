//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreTCPStatsReport : PBCodable <NSCopying>
{
    unsigned long long _tcpConnectionAccepts;
    unsigned long long _tcpConnectionAttempts;
    unsigned long long _tcpIPv4AvgRTT;
    unsigned long long _tcpIPv6AvgRTT;
    unsigned long long _tcpRecvPLR;
    unsigned long long _tcpSendPLR;
    unsigned long long _tcpSendReorderRate;
    unsigned long long _tcpSendTLRTO;
    struct {
        unsigned int tcpConnectionAccepts:1;
        unsigned int tcpConnectionAttempts:1;
        unsigned int tcpIPv4AvgRTT:1;
        unsigned int tcpIPv6AvgRTT:1;
        unsigned int tcpRecvPLR:1;
        unsigned int tcpSendPLR:1;
        unsigned int tcpSendReorderRate:1;
        unsigned int tcpSendTLRTO:1;
    } _has;
}

@property(nonatomic) unsigned long long tcpConnectionAccepts; // @synthesize tcpConnectionAccepts=_tcpConnectionAccepts;
@property(nonatomic) unsigned long long tcpConnectionAttempts; // @synthesize tcpConnectionAttempts=_tcpConnectionAttempts;
@property(nonatomic) unsigned long long tcpSendReorderRate; // @synthesize tcpSendReorderRate=_tcpSendReorderRate;
@property(nonatomic) unsigned long long tcpSendTLRTO; // @synthesize tcpSendTLRTO=_tcpSendTLRTO;
@property(nonatomic) unsigned long long tcpRecvPLR; // @synthesize tcpRecvPLR=_tcpRecvPLR;
@property(nonatomic) unsigned long long tcpSendPLR; // @synthesize tcpSendPLR=_tcpSendPLR;
@property(nonatomic) unsigned long long tcpIPv6AvgRTT; // @synthesize tcpIPv6AvgRTT=_tcpIPv6AvgRTT;
@property(nonatomic) unsigned long long tcpIPv4AvgRTT; // @synthesize tcpIPv4AvgRTT=_tcpIPv4AvgRTT;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTcpConnectionAccepts;
@property(nonatomic) BOOL hasTcpConnectionAttempts;
@property(nonatomic) BOOL hasTcpSendReorderRate;
@property(nonatomic) BOOL hasTcpSendTLRTO;
@property(nonatomic) BOOL hasTcpRecvPLR;
@property(nonatomic) BOOL hasTcpSendPLR;
@property(nonatomic) BOOL hasTcpIPv6AvgRTT;
@property(nonatomic) BOOL hasTcpIPv4AvgRTT;

@end

