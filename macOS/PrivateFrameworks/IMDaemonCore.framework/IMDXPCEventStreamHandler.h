//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface IMDXPCEventStreamHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)didReceiveEventWithName:(id)arg1 userInfo:(id)arg2;
- (id)queueForDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithEventStreamName:(const char *)arg1;
- (id)init;

@end

