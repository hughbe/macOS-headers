//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long commandTypes; // @dynamic commandTypes;
@property(nonatomic) BOOL inheritBuffers; // @dynamic inheritBuffers;
@property(nonatomic) BOOL inheritPipelineState; // @dynamic inheritPipelineState;
@property(nonatomic) unsigned long long maxFragmentBufferBindCount; // @dynamic maxFragmentBufferBindCount;
@property(nonatomic) unsigned long long maxVertexBufferBindCount; // @dynamic maxVertexBufferBindCount;

@end

