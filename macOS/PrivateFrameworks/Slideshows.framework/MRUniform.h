//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MUPoolObject.h>

@interface MRUniform : MUPoolObject
{
    float m[16];
    long long i;
    long long length;
}

+ (BOOL)clearVars;
+ (CDStruct_7b508128 *)poolInfo;
- (id)initWithMat4:(float [16])arg1;
- (id)initWithMat4ForMat3:(float [16])arg1;
- (id)initWithI:(long long)arg1;
- (id)initWithVec4:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (id)initWithVec3:(double)arg1:(double)arg2:(double)arg3;
- (id)initWithVec2:(double)arg1:(double)arg2;
- (id)initWithFloat:(double)arg1;

@end

