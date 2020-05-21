//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol ConnectionProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface APConnectionNotifier : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_underlyingRemoteConnection;
}

+ (id)sharedNotifier;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *underlyingRemoteConnection; // @synthesize underlyingRemoteConnection=_underlyingRemoteConnection;
@property(readonly) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
- (id)_newRemoteConnection;
- (id)_remoteConnection;
@property(readonly) id <ConnectionProtocol> remoteObjectProxy;
- (id)init;

@end

