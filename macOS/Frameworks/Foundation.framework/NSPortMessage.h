//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPort;

@interface NSPortMessage : NSObject
{
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    void *reserved2;
    void *reserved;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)sendBeforeDate:(id)arg1;
@property(readonly, copy) NSArray *components;
@property unsigned int msgid;
@property(readonly, retain) NSPort *receivePort;
@property(readonly, retain) NSPort *sendPort;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;
- (id)initWithMachMessage:(void *)arg1;

@end

