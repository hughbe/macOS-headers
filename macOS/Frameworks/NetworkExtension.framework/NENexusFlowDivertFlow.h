//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NENexusFlow.h>

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow
{
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow *_flowDivertFlow;
}

- (void).cxx_destruct;
@property struct _NEFlow *flowDivertFlow; // @synthesize flowDivertFlow=_flowDivertFlow;
@property(retain) NWParameters *internalParameters; // @synthesize internalParameters=_internalParameters;
@property(retain) NWEndpoint *internalEndpoint; // @synthesize internalEndpoint=_internalEndpoint;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
- (id)clientIdentifier;
- (id)parameters;
- (id)endpoint;
- (void)dealloc;
- (id)initWithFlowDivertFlow:(struct _NEFlow *)arg1;

@end

