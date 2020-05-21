//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSDate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemMetadataCollectorInternal : NSObject
{
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSArray *identifiers;
    NSArray *classifyingLabels;
    NSDate *mostRecentlyModifiedMetadataGroupTimestamp;
    AVWeakReference *weakReferenceToPlayerItem;
}

@end

