//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PASampling/PASerializable-Protocol.h>

@class NSString;

@interface PASampleTaskDataPrivateData : NSObject <PASerializable>
{
    long long _task_size_bytes;
    unsigned long long _ss_flags;
    int _suspend_count;
    int _faults;
    int _pageins;
    int _cow_faults;
    unsigned int _latency_qos;
    unsigned long long _terminatedThreadsUserTimeInNs;
    unsigned long long _terminatedThreadsSystemTimeInNs;
    unsigned long long _terminatedThreadsInstructions;
    unsigned long long _terminatedThreadsCycles;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
@property(readonly) unsigned long long terminatedThreadsCycles; // @synthesize terminatedThreadsCycles=_terminatedThreadsCycles;
@property(readonly) unsigned long long terminatedThreadsInstructions; // @synthesize terminatedThreadsInstructions=_terminatedThreadsInstructions;
@property(readonly) unsigned long long terminatedThreadsSystemTimeInNs; // @synthesize terminatedThreadsSystemTimeInNs=_terminatedThreadsSystemTimeInNs;
@property(readonly) unsigned long long terminatedThreadsUserTimeInNs; // @synthesize terminatedThreadsUserTimeInNs=_terminatedThreadsUserTimeInNs;
@property(readonly) unsigned int latencyQos; // @synthesize latencyQos=_latency_qos;
@property(readonly) unsigned long long ss_flags; // @synthesize ss_flags=_ss_flags;
@property(readonly) int numberOfPageIns; // @synthesize numberOfPageIns=_pageins;
@property(readonly) int numberOfCopyOnWritePageFaults; // @synthesize numberOfCopyOnWritePageFaults=_cow_faults;
@property(readonly) int numberOfPageFaults; // @synthesize numberOfPageFaults=_faults;
@property(readonly) long long taskSizeInBytes; // @synthesize taskSizeInBytes=_task_size_bytes;
@property(readonly) int suspendCount; // @synthesize suspendCount=_suspend_count;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (id)initWithTaskSnapshot:(const struct task_snapshot *)arg1 machTimebase:(struct mach_timebase_info)arg2;
- (BOOL)correspondsToKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (BOOL)correspondsToKCDataStackshotTask:(const struct task_snapshot_v2 *)arg1 andTerminatedThreadsInstructionCycles:(const struct instrs_cycles_snapshot *)arg2 machTimebase:(struct mach_timebase_info)arg3;
- (BOOL)correspondsToTaskSnapshot:(const struct task_snapshot *)arg1 machTimebase:(struct mach_timebase_info)arg2;
@property(readonly) BOOL wqExceededTotalThreadLimit;
@property(readonly) BOOL wqExceededConstrainedThreadLimit;
@property(readonly) BOOL isDirty;
@property(readonly) BOOL isLiveImpDonor;
@property(readonly) BOOL isImpDonor;
@property(readonly) BOOL isTimerThrottled;
@property(readonly) BOOL isSuppressed;
@property(readonly) BOOL isBoosted;
@property(readonly) BOOL isForeground;
@property(readonly) BOOL isNonVisible;
@property(readonly) BOOL isVisible;
@property(readonly) BOOL isDarwinExtBG;
@property(readonly) BOOL isDarwinBG;
@property(readonly) BOOL isFrozen;
@property(readonly) BOOL isPidSuspended;
@property(readonly) BOOL isTerminatedSnapshot;
@property(readonly) BOOL isTaskResourceFlagged;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

