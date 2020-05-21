//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsCollectorQueue, VCStatisticsHistory;

__attribute__((visibility("hidden")))
@interface AVCStatisticsCollector : NSObject
{
    NSMutableDictionary *_statistics;
    struct tagVCStatisticsCollection *_statisticsCollection;
    NSMutableDictionary *_statisticChangeHandlerDictionary;
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    VCStatisticsCollectorQueue *_queue;
    int _forceQueueWaitTimeMs;
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    BOOL _useExternalThread;
    unsigned int _sharedEstimatedBandwidth;
    unsigned int _sharedEstimatedBandwidthUncapped;
    unsigned int _sharedRemoteEstimatedBandwidth;
    unsigned int _maxLocalBurstyLoss;
    unsigned int _packetReceivedAudio;
    unsigned int _packetReceivedVideo;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    struct _opaque_pthread_rwlock_t _statisticsCollectionLock;
}

@property(nonatomic) unsigned int expectedBitrate; // @synthesize expectedBitrate=_expectedBitrate;
@property(nonatomic) unsigned int estimatedBandwidthCap; // @synthesize estimatedBandwidthCap=_estimatedBandwidthCap;
@property(readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth; // @synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidthUncapped; // @synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped;
@property(readonly, nonatomic) unsigned int sharedEstimatedBandwidth; // @synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void)addMostBurstyLossInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addRoundTripTimeInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addAFRCActualBitrate:(CDStruct_b21f1e06 *)arg1;
- (void)addActualBitrateInfo:(CDStruct_b21f1e06 *)arg1;
- (void)addPacketLossInfo:(CDStruct_b21f1e06 *)arg1;
- (void)computeOWRDEstimation:(CDStruct_b21f1e06 *)arg1;
- (void)computeBWEstimation:(CDStruct_b21f1e06 *)arg1;
- (void)updateLocalEstimatedBandwidth;
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(CDStruct_b21f1e06 *)arg1;
- (void)updateMaxLocalBurstyLoss:(unsigned int)arg1;
- (void)updatePacketReceivedCount:(CDStruct_b21f1e06 *)arg1;
- (void)computeOtherStatistics:(CDStruct_b21f1e06 *)arg1;
- (void)addStatisticsHistory:(CDStruct_b21f1e06 *)arg1;
- (void)addEntriesFromStatistics:(CDStruct_b21f1e06)arg1;
- (void)processVCStatisticsInternal:(CDStruct_b21f1e06)arg1;
- (CDStruct_b21f1e06)getVCStatisticsWithType:(int)arg1 time:(double)arg2;
- (void)drainAndProcessVCStatistics:(CDStruct_b21f1e06)arg1;
- (void)setVCStatistics:(CDStruct_b21f1e06)arg1;
- (void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getStatistics:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initForSimulation:(BOOL)arg1 useExternalThread:(BOOL)arg2;
- (id)init;

@end

