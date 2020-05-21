//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLHeapDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLHeapDescriptorInternal : MTLHeapDescriptor
{
    struct MTLHeapDescriptorPrivate *_private;
}

- (BOOL)validateWithDevice:(id)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (unsigned long long)resourceOptions;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (unsigned long long)hazardTrackingMode;
- (const struct MTLHeapDescriptorPrivate *)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)description;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (unsigned long long)cpuCacheMode;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

