//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBPowerAssertionManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSString, RBProcessMap, RBSystemPowerAssertion;
@protocol OS_dispatch_queue, RBPowerAssertionManagerDelegate;

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing>
{
    RBProcessMap *_stateMap;
    RBProcessMap *_assertionMap;
    RBSystemPowerAssertion *_systemAssertion;
    unsigned long long _assertionCount;
    NSObject<OS_dispatch_queue> *_queue;
    id <RBPowerAssertionManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RBPowerAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;
- (id)_unitTest_nameOfPowerAssertionForSystem;
- (BOOL)_unitTest_hasPowerAssertionForProcess:(id)arg1;
- (BOOL)_unitTest_hasSystemPowerAssertion;
- (void)_queue_willInvalidateAssertion;
- (void)_queue_didAcquireAssertion;
- (void)_queue_invalidateAssertion:(id)arg1;
- (void)_queue_updateProcessAssertion:(id)arg1 withState:(id)arg2;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)removeProcess:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)applySystemState:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (void)didUpdateProcessStates:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

