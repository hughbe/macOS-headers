//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryProtocol-Protocol.h>

@class CLSPOICache, NSArray, NSString;
@protocol GEOMapServiceTicket;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol>
{
    CLSPOICache *_cache;
    BOOL _isCancelled;
    NSArray *_muids;
    id <GEOMapServiceTicket> _ticket;
    NSArray *_resolvedBusinessItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) NSArray *resolvedBusinessItems; // @synthesize resolvedBusinessItems=_resolvedBusinessItems;
@property(readonly, nonatomic) id <GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, copy, nonatomic) NSArray *muids; // @synthesize muids=_muids;
- (void)prepareForRetry;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithMUIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

