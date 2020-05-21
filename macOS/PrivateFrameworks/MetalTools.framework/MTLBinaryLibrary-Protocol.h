//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/NSObject-Protocol.h>

@class MTLComputePipelineDescriptor, NSString, NSURL;
@protocol MTLDevice;

@protocol MTLBinaryLibrary <NSObject>
@property(readonly) unsigned long long options;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)serializeToURL:(NSURL *)arg1 error:(id *)arg2;
- (BOOL)removeComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
@end

