//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal, NSObject;
@protocol AVPlayerItemMetadataCollectorPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector
{
    AVPlayerItemMetadataCollectorInternal *_metadataCollectorInternal;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVPlayerItemMetadataCollectorPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2;
- (id)init;
- (void)_updateTaggedRangeMetadataArray:(id)arg1;
- (id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id *)arg4 newIndexesOut:(id *)arg5;
- (BOOL)_isAttachedToPlayerItem;
- (void)_detatchFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)arg1;

@end

