//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSProcessExecutionProvisionDelegate-Protocol.h>

@class FBSProcessWatchdogPolicy, NSString;
@protocol FBSProcess, FBSProcessInternal;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding>
{
    NSString *_name;
    id <FBSProcessInternal> _process;
    FBSProcessWatchdogPolicy *_policy;
    BOOL _active;
    BOOL _invalidated;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBSProcessWatchdogPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) __weak id <FBSProcess> process; // @synthesize process=_process;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)provision:(id)arg1 wasViolatedWithError:(id)arg2;
- (void)_beginMonitoringConstraints;
- (void)_stopMonitoringConstraints;
- (void)invalidate;
- (void)deactivate;
- (void)activate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)dealloc;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

