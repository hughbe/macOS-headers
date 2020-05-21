//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;
    GEOServer *_server;
}

+ (id)proxyForClass:(Class)arg1;
+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToServerProxy:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (void)startServerWithDaemon:(id)arg1;
- (void)_setServer:(id)arg1 daemon:(id)arg2;

@end

