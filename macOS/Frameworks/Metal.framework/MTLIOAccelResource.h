//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLResourceSPI-Protocol.h>

@class MTLIOAccelDevice, MTLResourceAllocationInfo, NSString;
@protocol MTLDevice, MTLHeap;

@interface MTLIOAccelResource : NSObject <MTLResourceSPI>
{
    struct _MTLIOAccelResource _res;
    MTLIOAccelResource *next;
    MTLIOAccelResource *prev;
    unsigned long long uniqueId;
    MTLIOAccelDevice<MTLDevice> *weakDevice;
}

- (void).cxx_destruct;
@property(readonly) __weak MTLIOAccelDevice<MTLDevice> *weakDevice; // @synthesize weakDevice;
- (void)releaseStrongDevice;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (BOOL)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (void)makeAliasable;
- (BOOL)isAliasable;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
- (struct __CFArray *)copyAnnotations;
- (void)annotateResource:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(struct __CFString *)arg2 obj_dict:(struct __CFDictionary *)arg3;
@property(readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property(readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@property(readonly) unsigned long long protectionOptions;
@property(readonly, nonatomic) unsigned long long resourceSize;
@property(readonly, nonatomic) unsigned int resourceID;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly, nonatomic) void *virtualAddress;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithResource:(id)arg1;
- (id)initWithDevice:(id)arg1 remoteStorageResource:(id)arg2 options:(unsigned long long)arg3 args:(struct IOAccelNewResourceArgs *)arg4 argsSize:(unsigned int)arg5;
- (id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(struct IOAccelNewResourceArgs *)arg3 argsSize:(unsigned int)arg4;
- (id)initStandinWithDevice:(id)arg1;
- (void)waitUntilComplete;
- (BOOL)isComplete;
- (BOOL)isPurgeable;
@property(readonly) struct __IOAccelResource *resourceRef;
@property int responsibleProcess;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(copy) NSString *label;
- (id)retainedLabel;
- (void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

