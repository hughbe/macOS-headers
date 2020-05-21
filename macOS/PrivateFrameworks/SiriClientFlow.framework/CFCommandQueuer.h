//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CFCommandQueuer : NSObject
{
    NSObject<OS_dispatch_queue> *_commandQueue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
- (id)initWithCommandIdentifier:(id)arg1;
- (void)initQueuesWithIdentifier:(id)arg1;
- (void)dispatchCommand:(id)arg1 isOneWay:(BOOL)arg2 withServiceHelper:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;

@end

