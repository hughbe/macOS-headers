//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/NSXPCListenerDelegate-Protocol.h>

@class CalXPCConnectionInfo, NSMutableSet, NSString, NSXPCListener;

@interface CalXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>
{
    CalXPCConnectionInfo *_info;
    CDUnknownBlockType _errorHandler;
    NSMutableSet *_clients;
    NSXPCListener *_connectionListener;
}

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) CalXPCConnectionInfo *info; // @synthesize info=_info;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)stopListening;
- (void)performBlockWithAllClients:(CDUnknownBlockType)arg1;
- (void)_removeClientConnection:(id)arg1;
- (void)_addClientConnection:(id)arg1 clientLink:(id)arg2;
- (void)_didInvalidateConnection:(id)arg1;
- (void)_didInterruptConnection;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupListener;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

