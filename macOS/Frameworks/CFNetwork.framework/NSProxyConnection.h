//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSProxyConnectionDelegate, OS_tcp_connection;

@interface NSProxyConnection : NSObject
{
    BOOL _doCleanupWhenWritesCompleted;
    id <NSProxyConnectionDelegate> _delegate;
    long long _pendingWrites;
    NSObject<OS_tcp_connection> *_connection;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_tcp_connection> *connection; // @synthesize connection=_connection;
@property BOOL doCleanupWhenWritesCompleted; // @synthesize doCleanupWhenWritesCompleted=_doCleanupWhenWritesCompleted;
@property long long pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property __weak id <NSProxyConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)cancel;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (id)initWithTCPConnection:(id)arg1;

@end

