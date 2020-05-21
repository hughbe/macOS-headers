//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPServer : NSObject
{
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
    id <_RWITCPServerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <_RWITCPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connectionClosed:(id)arg1;
- (BOOL)_createListenDispatchSource;
- (BOOL)_listenOnPort:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (id)_initWithDelegate:(id)arg1;

@end

