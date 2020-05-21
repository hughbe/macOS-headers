//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CATBlockOperationObserver : NSObject <CATOperationObserver>
{
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CDUnknownBlockType _didStart;
    CDUnknownBlockType _didProgress;
    CDUnknownBlockType _didFinish;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
@property(copy, nonatomic) CDUnknownBlockType didProgress; // @synthesize didProgress=_didProgress;
@property(copy, nonatomic) CDUnknownBlockType didStart; // @synthesize didStart=_didStart;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)invokeBlock:(CDUnknownBlockType)arg1 operation:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

