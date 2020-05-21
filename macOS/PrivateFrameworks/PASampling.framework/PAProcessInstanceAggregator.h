//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator
{
    unsigned long long _startingTSDSIndex;
    NSString *_headerNote;
    unsigned long long _stackshotFrameAddress;
    unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;
    BOOL _forceOneBasedTimeIndexes;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses; // @synthesize timestampIndexWhenTransitionedToSamplingAllProcesses=_timestampIndexWhenTransitionedToSamplingAllProcesses;
@property unsigned long long stackshotFrameAddress; // @synthesize stackshotFrameAddress=_stackshotFrameAddress;
@property(copy) NSString *headerNote; // @synthesize headerNote=_headerNote;
@property BOOL forceOneBasedTimeIndexes; // @synthesize forceOneBasedTimeIndexes=_forceOneBasedTimeIndexes;
- (void)printFooterToOutputStream:(id)arg1;
- (void)printHIDEventsToOutputStream:(id)arg1;
- (void)printHIDEvent:(id)arg1 toOutputStream:(id)arg2;
- (id)sampleIndexStringForMachTime:(double)arg1;
- (id)sampleIndexStringForMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (_Bool)shouldPrintTimeOutsideSamplingRange:(double)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sortedTasks;
- (void)setSamples:(id)arg1;
- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1;
- (int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1;
- (id)sampleTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestampIndex:(unsigned long long)arg3;
- (id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)kernelSampleTaskForSymbolication;
- (id)initWithSampleStore:(id)arg1;
@property(readonly) BOOL hasTargetProcess;
@property BOOL printHeavyStacks;
@property BOOL printTargetHIDEvent;
@property BOOL printSpinSignatureStack;
- (void)limitToSampleInterval:(double)arg1;

@end

