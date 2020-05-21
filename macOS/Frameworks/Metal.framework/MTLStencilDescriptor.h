//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@interface MTLStencilDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long depthFailureOperation; // @dynamic depthFailureOperation;
@property(nonatomic) unsigned long long depthStencilPassOperation; // @dynamic depthStencilPassOperation;
@property(nonatomic) unsigned int readMask; // @dynamic readMask;
@property(nonatomic) unsigned long long stencilCompareFunction; // @dynamic stencilCompareFunction;
@property(nonatomic) unsigned long long stencilFailureOperation; // @dynamic stencilFailureOperation;
@property(readonly) const struct MTLStencilDescriptorPrivate *stencilPrivate; // @dynamic stencilPrivate;
@property(nonatomic) unsigned int writeMask; // @dynamic writeMask;

@end

