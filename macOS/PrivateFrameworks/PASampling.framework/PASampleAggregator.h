//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, PASampleAggregatorOptions, PASampleTimeSeriesDataStore;

@interface PASampleAggregator : NSObject
{
    PASampleAggregatorOptions *_options;
    PASampleTimeSeriesDataStore *_sampleStore;
    NSMutableSet *_tasks;
    NSMutableArray *_wallTimestamps;
    NSMutableArray *_machTimestamps;
    double _sampleIntervalLimit;
}

- (void).cxx_destruct;
@property(readonly) double sampleIntervalLimit; // @synthesize sampleIntervalLimit=_sampleIntervalLimit;
@property(retain) NSMutableSet *tasks; // @synthesize tasks=_tasks;
@property(readonly) PASampleTimeSeriesDataStore *sampleStore; // @synthesize sampleStore=_sampleStore;
@property(copy) PASampleAggregatorOptions *options; // @synthesize options=_options;
- (void)setSamples:(id)arg1;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)printToMutableData:(id)arg1;
- (void)printToStream:(struct __sFILE *)arg1;
- (void)_printToOutputStream:(id)arg1;
- (void)printFooterToOutputStream:(id)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printDateToOutputStream:(id)arg1;
- (id)sortedTasks;
- (unsigned long long)firstTimestampIndexAfterMachTime:(double)arg1;
- (unsigned long long)firstTimestampIndexAfterWallTime:(double)arg1;
- (double)machTimeAtTimestampIndex:(unsigned long long)arg1;
- (double)wallTimeAtTimestampIndex:(unsigned long long)arg1;
@property BOOL verbose;
@property BOOL aggregateStacksByProcess;
@property BOOL aggregateStacksByThread;
@property BOOL displayAllHIDEvents;
@property BOOL displayEmptyBootArgs;
@property BOOL displayAddressesInBlockedReasons;
@property BOOL displayBlockedReasonsLackingProcessOwners;
@property BOOL displayBlockedReasons;
@property BOOL displayAllBinaries;
@property BOOL displayIdleWorkQueueThreads;
@property BOOL displayBlockedThreads;
@property BOOL displayRunningThreads;
@property BOOL displayRunnableThreads;
@property BOOL displayBinaryImagesLackingNameOrPath;
@property BOOL displayBinaryImageAddresses;
@property BOOL displaySymbolInformation;
@property BOOL displayOffsetsFromUnnamedSymbols;
@property BOOL displayProcessFirstLastTimes;
@property BOOL displaySub1MsCpuTime;
@property BOOL displayStateChangesOnIdleThreads;
@property BOOL displayFrameAddresses;
@property BOOL binaryImagesBeforeStacks;
@property BOOL tabDelineateBinaryImageSections;
- (void)setHeaderOnly:(BOOL)arg1;
@property BOOL displayFooter;
@property BOOL displayBody;
@property BOOL displayHeader;
@property(readonly) unsigned long long count;
- (id)initWithSampleStore:(id)arg1;

@end

