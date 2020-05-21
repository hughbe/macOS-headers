//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;
@protocol MTLBuffer, MTLRasterizationRateMap;

@interface MTLRenderPassDescriptor : NSObject <NSCopying>
{
}

+ (id)renderPassDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(nonatomic) unsigned long long defaultRasterSampleCount; // @dynamic defaultRasterSampleCount;
@property(copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment; // @dynamic depthAttachment;
@property(retain, nonatomic) id <MTLRasterizationRateMap> rasterizationRateMap; // @dynamic rasterizationRateMap;
@property(nonatomic) unsigned long long renderTargetArrayLength; // @dynamic renderTargetArrayLength;
@property(nonatomic) unsigned long long renderTargetHeight; // @dynamic renderTargetHeight;
@property(nonatomic) unsigned long long renderTargetWidth; // @dynamic renderTargetWidth;
@property(copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment; // @dynamic stencilAttachment;
@property(retain, nonatomic) id <MTLBuffer> visibilityResultBuffer; // @dynamic visibilityResultBuffer;

@end

