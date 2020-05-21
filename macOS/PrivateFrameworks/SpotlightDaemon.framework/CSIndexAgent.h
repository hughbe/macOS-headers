//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSIndexAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;
    NSMutableDictionary *_indexConnections;
}

+ (id)indexDelegateAgent;
+ (id)indexAgent:(BOOL)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *indexConnections; // @synthesize indexConnections=_indexConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (BOOL)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (id)indexConnection:(id)arg1;
- (BOOL)lostClientConnection:(id)arg1 error:(id)arg2;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)arg1;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1;

@end

