//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>
#import <CoreUtils/CUEnvironmentable-Protocol.h>

@class CUEnvironment, CUSetupFlow;
@protocol OS_dispatch_queue;

@interface CUSetupStep : NSObject <CUActivatable, CUEnvironmentable>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUEnvironment *_environment;
    unsigned long long _setupFlags;
    CUSetupFlow *_setupFlow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUSetupFlow *setupFlow; // @synthesize setupFlow=_setupFlow;
@property(nonatomic) unsigned long long setupFlags; // @synthesize setupFlags=_setupFlags;
@property(retain, nonatomic) CUEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (BOOL)runAndReturnError:(id *)arg1;
- (BOOL)run;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

