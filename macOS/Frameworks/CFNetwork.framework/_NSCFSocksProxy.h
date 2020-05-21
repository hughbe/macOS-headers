//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSProxyConnectionDelegate-Protocol.h>

@class NSDictionary, NSProxyConnection, NSString, SocksHandshake;
@protocol OS_dispatch_queue;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    int _outPort;
    NSString *_outHost;
    SocksHandshake *_socksHandshake;
    NSProxyConnection *_inbound;
    NSProxyConnection *_outbound;
    NSDictionary *_configuration;
}

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;
+ (id)proxyServers;
- (void).cxx_destruct;
@property(retain) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain) NSProxyConnection *outbound; // @synthesize outbound=_outbound;
@property(retain) NSProxyConnection *inbound; // @synthesize inbound=_inbound;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)cleanup;
- (void)connected:(int)arg1;
- (void)readOutbound;
- (void)readInbound;
- (void)handshakeRead;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

