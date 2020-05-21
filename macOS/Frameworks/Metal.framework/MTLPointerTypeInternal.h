//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLPointerType.h>

@class MTLType;

__attribute__((visibility("hidden")))
@interface MTLPointerTypeInternal : MTLPointerType
{
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    BOOL _elementIsArgumentBuffer;
    BOOL _isConstantBuffer;
    BOOL _doRetain;
}

- (unsigned long long)dataSize;
- (unsigned long long)alignment;
- (unsigned long long)access;
- (unsigned long long)elementType;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)elementArrayType;
- (id)structType;
- (id)elementStructType;
- (BOOL)elementIsIndirectArgumentBuffer;
- (BOOL)elementIsArgumentBuffer;
- (BOOL)isConstantBuffer;
- (void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2;
- (id)elementTypeDescription;
- (void)dealloc;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 doRetain:(BOOL)arg8;

@end

