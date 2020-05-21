//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TuriCore/NSObject-Protocol.h>
#import <TuriCore/NSSecureCoding-Protocol.h>

@class MPSImage, MPSImageDescriptor, MPSKernel, NSArray;
@protocol MTLCommandBuffer;

@protocol MPSImageAllocator <NSObject, NSSecureCoding>
- (MPSImage *)imageForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3;

@optional
- (NSArray *)imageBatchForCommandBuffer:(id <MTLCommandBuffer>)arg1 imageDescriptor:(MPSImageDescriptor *)arg2 kernel:(MPSKernel *)arg3 count:(unsigned long long)arg4;
@end

