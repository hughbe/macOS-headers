//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKWarpGeometry.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface SKWarpGeometryGrid : SKWarpGeometry <NSSecureCoding>
{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _sourcePositions;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _destPositions;
    MISSING_TYPE *_dimensions;
    int _vertexCount;
    _Bool _isIdentityWarp;
}

+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const MISSING_TYPE **)arg3 destPositions:(const MISSING_TYPE **)arg4;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2;
+ (id)grid;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)gridByReplacingDestPositions:(const MISSING_TYPE **)arg1;
- (id)gridByReplacingSourcePositions:(const MISSING_TYPE **)arg1;
@property(readonly, nonatomic) const MISSING_TYPE **destPositions;
@property(readonly, nonatomic) const MISSING_TYPE **sourcePositions;
@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) long long numberOfRows;
- (MISSING_TYPE *)destPositionAtIndex:(long long)arg1;
- (MISSING_TYPE *)sourcePositionAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long vertexCount;
- (BOOL)isIdentityWarp;
- (BOOL)isEqualToGrid:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const MISSING_TYPE **)arg3 destPositions:(const MISSING_TYPE **)arg4;
- (id)init;

@end

