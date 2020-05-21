//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSArray, NUGLBuffer, NUGLVertexLayout;

@interface NUGLVertexArray : NUGLObject
{
    NUGLBuffer *_buffer;
    NSArray *_locations;
    BOOL _needsUpdate;
    NUGLVertexLayout *_layout;
    long long _capacity;
    long long _count;
    NSArray *_attributeLocations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *attributeLocations; // @synthesize attributeLocations=_attributeLocations;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NUGLVertexLayout *layout; // @synthesize layout=_layout;
- (void)_growToCapacity:(long long)arg1 context:(id)arg2;
- (struct _NSRange)writeVertexData:(long long)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (struct _NSRange)bufferRangeForVertexRange:(struct _NSRange)arg1;
- (void)readVertexDataInRange:(struct _NSRange)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_updateAttributesWithContext:(id)arg1;
- (void)ensure:(id)arg1;
- (void)delete;
- (void)generate:(id)arg1;
- (void)reset;
- (id)initWithLayout:(id)arg1 capacity:(long long)arg2;
- (id)init;

@end

