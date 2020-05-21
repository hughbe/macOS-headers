//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject
{
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableDictionary *_halfChainedRecordMap;
    NSMutableSet *_alreadyHalfChainedRecords;
    NSMutableArray *_recordsForFirstPhase;
    BRCAppLibrary *_appLibrary;
    BOOL _should2PhasePCSChain;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *halfChainedRecordMap; // @synthesize halfChainedRecordMap=_halfChainedRecordMap;
@property(readonly, nonatomic) BOOL should2PhasePCSChain;
@property(readonly, nonatomic) NSArray *recordsForSecondPhase;
@property(readonly, nonatomic) NSArray *recordsForFirstPhase;
@property(readonly, nonatomic) unsigned long long chainedRecordsCount;
@property(readonly, nonatomic) unsigned long long batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;
- (void)_chainPreppedRecordToParent:(id)arg1;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (void)prepareFirstPhaseRecordBatch;
- (BOOL)containsRecordInfo:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;

@end

