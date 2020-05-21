//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NENexus.h>

@class NEFlowDivertFileHandle, NSData, NSMutableSet, NSObject, NWRemoteConnectionDirector;
@protocol OS_dispatch_queue;

@interface NEFlowNexus : NENexus
{
    BOOL _supportsBrowseRequests;
    unsigned int _flowDivertControlUnit;
    struct _NEFlowDirector *_flowDivertDirector;
    NEFlowDivertFileHandle *_flowDivertControl;
    NSObject<OS_dispatch_queue> *_flowDivertQueue;
    NSData *_flowDivertTokenHMACKey;
    NWRemoteConnectionDirector *_connectionDirector;
    NSMutableSet *_browseAssertions;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *browseAssertions; // @synthesize browseAssertions=_browseAssertions;
@property(retain) NWRemoteConnectionDirector *connectionDirector; // @synthesize connectionDirector=_connectionDirector;
@property(retain) NSData *flowDivertTokenHMACKey; // @synthesize flowDivertTokenHMACKey=_flowDivertTokenHMACKey;
@property unsigned int flowDivertControlUnit; // @synthesize flowDivertControlUnit=_flowDivertControlUnit;
@property(retain) NSObject<OS_dispatch_queue> *flowDivertQueue; // @synthesize flowDivertQueue=_flowDivertQueue;
@property(retain) NEFlowDivertFileHandle *flowDivertControl; // @synthesize flowDivertControl=_flowDivertControl;
@property struct _NEFlowDirector *flowDivertDirector; // @synthesize flowDivertDirector=_flowDivertDirector;
@property(nonatomic) BOOL supportsBrowseRequests; // @synthesize supportsBrowseRequests=_supportsBrowseRequests;
- (void)handleUnassertFromClient:(id)arg1;
- (void)handleAssertFromClient:(id)arg1;
- (BOOL)setDiscoveredEndpoints:(id)arg1 forClient:(id)arg2;
- (void)disconnectFlow:(id)arg1;
- (void)connectNewFlow:(id)arg1;
- (void)setRemoteConnectionDirector:(id)arg1;
- (BOOL)setupFlowDivertPolicies;
- (BOOL)setupFlowDivertDirector;
- (BOOL)installFlowDivertRules;
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;

@end

