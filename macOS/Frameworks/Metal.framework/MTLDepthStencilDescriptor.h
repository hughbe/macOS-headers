//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) MTLStencilDescriptor *backFaceStencil; // @dynamic backFaceStencil;
@property(nonatomic) unsigned long long depthCompareFunction; // @dynamic depthCompareFunction;
@property(readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate; // @dynamic depthStencilPrivate;
@property(nonatomic, getter=isDepthWriteEnabled) BOOL depthWriteEnabled; // @dynamic depthWriteEnabled;
@property(copy, nonatomic) MTLStencilDescriptor *frontFaceStencil; // @dynamic frontFaceStencil;
@property(copy, nonatomic) NSString *label; // @dynamic label;

@end

