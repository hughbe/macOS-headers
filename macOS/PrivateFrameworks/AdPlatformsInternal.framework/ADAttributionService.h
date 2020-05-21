//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdPlatformsInternal/NSXPCListenerDelegate-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString, NSXPCListener;

@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSNumber *_transactionID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)removeClientForToken:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

