//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol FxPathAPI_v2
- (BOOL)pathGeometryInfo:(struct FxPathGeometryInfo *)arg1 forPath:(void *)arg2 atTime:(CDUnion_baaf6063)arg3 error:(id *)arg4;
- (BOOL)setPath:(void *)arg1 toColor:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)blendMode:(unsigned long long *)arg1 ofPath:(void *)arg2 error:(id *)arg3;
- (BOOL)point:(struct CGPoint *)arg1 atPercentageOfParameter:(double)arg2 alongPath:(void *)arg3 atTime:(CDUnion_baaf6063)arg4 error:(id *)arg5;
- (BOOL)point:(struct CGPoint *)arg1 atPercentageOfDistance:(double)arg2 alongPath:(void *)arg3 atTime:(CDUnion_baaf6063)arg4 error:(id *)arg5;
- (BOOL)vertex:(struct FxVertex *)arg1 atIndex:(unsigned long long)arg2 ofPath:(void *)arg3 atFxTime:(CDUnion_baaf6063)arg4 error:(id *)arg5;
- (BOOL)numberOfVertices:(unsigned long long *)arg1 inPath:(void *)arg2 atFxTime:(CDUnion_baaf6063)arg3 error:(id *)arg4;
- (BOOL)length:(double *)arg1 ofSegment:(unsigned long long)arg2 ofPath:(void *)arg3 atFxTime:(CDUnion_baaf6063)arg4 error:(id *)arg5;
- (BOOL)length:(double *)arg1 ofPath:(void *)arg2 atFxTime:(CDUnion_baaf6063)arg3 error:(id *)arg4;
- (BOOL)style:(unsigned long long *)arg1 ofPath:(void *)arg2 error:(id *)arg3;
- (BOOL)isPath:(void *)arg1 inverted:(char *)arg2 atFxTime:(CDUnion_baaf6063)arg3 error:(id *)arg4;
- (BOOL)isPath:(void *)arg1 open:(char *)arg2 atFxTime:(CDUnion_baaf6063)arg3 error:(id *)arg4;
- (BOOL)name:(id *)arg1 ofPath:(void *)arg2 error:(id *)arg3;
- (BOOL)pathID:(void **)arg1 forIndex:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)numberOfPathsAtFxTime:(CDUnion_baaf6063)arg1;
@end

