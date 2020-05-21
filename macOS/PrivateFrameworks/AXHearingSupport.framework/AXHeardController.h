//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AXHeardController : NSObject
{
    NSMutableArray *_clients;
    NSMutableDictionary *_handlers;
}

+ (id)entitlementsForMessageID:(unsigned long long)arg1;
+ (id)sharedServer;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)registerFakeClient:(id)arg1;
- (void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)addHandler:(id)arg1 andBlock:(CDUnknownBlockType)arg2 forMessageIdentifier:(unsigned long long)arg3;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;
- (void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;
- (void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (BOOL)sendMessage:(id)arg1 withError:(id *)arg2;
- (void)handleNewConnection:(id)arg1;
- (BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2;
- (void)dealloc;
- (void)startServer;
- (id)init;

@end

