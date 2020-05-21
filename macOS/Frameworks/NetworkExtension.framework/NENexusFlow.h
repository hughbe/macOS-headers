//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NENexusFlowManager, NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlow : NSObject
{
    unsigned long long _state;
    struct nw_protocol *_protocol;
    NSUUID *_nexusInstance;
    NENexusFlowManager *_manager;
}

- (void).cxx_destruct;
@property __weak NENexusFlowManager *manager; // @synthesize manager=_manager;
@property(retain) NSUUID *nexusInstance; // @synthesize nexusInstance=_nexusInstance;
@property(nonatomic) struct nw_protocol *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSUUID *clientIdentifier;
@property(readonly, nonatomic) NWParameters *parameters;
@property(readonly, nonatomic) NWEndpoint *endpoint;
- (void)dealloc;
- (void)setupFlowProtocolWithUUID:(id)arg1;

@end

