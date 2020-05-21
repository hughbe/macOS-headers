//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSession-Protocol.h>

@class NSXPCConnection, TKSmartCardSlotEngine;

__attribute__((visibility("hidden")))
@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession>
{
    TKSmartCardSlotEngine *_slot;
    BOOL _transmitting;
    BOOL _valid;
    BOOL _active;
    long long _endPolicy;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property long long endPolicy; // @synthesize endPolicy=_endPolicy;
@property BOOL active; // @synthesize active=_active;
@property BOOL valid; // @synthesize valid=_valid;
- (void)dealloc;
- (void)terminateWithReply:(CDUnknownBlockType)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)transmit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;

@end

