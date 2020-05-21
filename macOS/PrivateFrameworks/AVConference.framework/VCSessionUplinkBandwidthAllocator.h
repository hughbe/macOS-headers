//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSDictionary, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocator : VCObject
{
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    BOOL _videoEnabled;
    BOOL _redundancyEnabled;
}

- (void)_assignCurrentTables;
- (id)audioRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2;
- (id)videoStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2;
- (id)videoMediaBitratesForTargetNetworkBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2;
- (id)audioRepairStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)audioStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)_videoEntriesForTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2 remainingBitrate:(unsigned int *)arg3;
- (BOOL)_isAvailableStreamConfiguration:(id)arg1;
- (BOOL)enableVideoStream:(BOOL)arg1 streamID:(unsigned short)arg2;
- (id)_audioEntriesForTargetBitrate:(unsigned int)arg1;
@property(nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

