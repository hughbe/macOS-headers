//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <CoreTelephony/CTXPCServiceInterface-Protocol.h>

@class NSObject, NSString;
@protocol CTXPCServiceInterface;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface>
{
    NSObject<CTXPCServiceInterface> *_target;
    struct queue _userQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCObject:(id)arg1 userQueue:(struct queue)arg2 errorHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

