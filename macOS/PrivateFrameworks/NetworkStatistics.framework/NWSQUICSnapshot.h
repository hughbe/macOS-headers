//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSData, NSString;

@interface NWSQUICSnapshot : NWSProtocolSnapshot
{
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_tcp_descriptor _descriptor;
    unsigned int _provider;
    unsigned long long _eventFlags;
    double _rttMinimum;
    double _rttAverage;
    double _rttVariation;
}

- (void).cxx_destruct;
@property(readonly) double rttVariation; // @synthesize rttVariation=_rttVariation;
@property(readonly) double rttAverage; // @synthesize rttAverage=_rttAverage;
@property(readonly) double rttMinimum; // @synthesize rttMinimum=_rttMinimum;
- (id)initWithCounts:(const struct nstat_counts *)arg1 QUICDescriptor:(struct nstat_tcp_descriptor *)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned int)arg6;
- (id)description;
- (id)traditionalDictionary;
- (unsigned long long)eventFlags;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapStartTime;
- (BOOL)countsIncludeHeaderOverhead;
- (BOOL)interfaceCompanionLink;
- (BOOL)interfaceExpensive;
- (BOOL)interfaceAWDL;
- (BOOL)interfaceWired;
- (BOOL)interfaceWifi;
- (BOOL)interfaceCellular;
- (BOOL)interfaceLoopback;
- (BOOL)interfaceUnknown;
- (double)flowDuration;
- (unsigned long long)flowStartContinuousTime;
- (id)flowStartTimestamp;
- (id)remoteAddress;
- (id)localAddress;
- (id)vuuid;
- (id)euuid;
- (id)uuid;
- (id)processName;
- (int)epid;
- (unsigned long long)eupid;
- (int)processID;
- (unsigned long long)uniqueProcessID;
- (unsigned int)trafficClass;
- (unsigned int)receiveBufferUsed;
- (unsigned int)receiveBufferSize;
- (unsigned int)interfaceIndex;
- (id)provider;

@end

