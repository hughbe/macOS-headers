//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSyncDataEndpoint-Protocol.h>

@class NSMutableSet, NSSet, NSString, VCDaemonXPCEventHandler;
@protocol OS_dispatch_queue, VCDatabaseProvider;

@interface VCDaemonSyncDataEndpoint : NSObject <VCSyncDataEndpoint>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <VCDatabaseProvider> _databaseProvider;
    VCDaemonXPCEventHandler *_eventHandler;
    NSMutableSet *_mutableSyncDataHandlers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *mutableSyncDataHandlers; // @synthesize mutableSyncDataHandlers=_mutableSyncDataHandlers;
@property(readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *syncDataHandlers;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

