//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLComponent-Protocol.h>

@class MDLObject, NSArray;

@protocol MDLTransformComponent <MDLComponent>
@property(readonly, copy, nonatomic) NSArray *keyTimes;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(nonatomic) BOOL resetsTransform;
@property(nonatomic) CDStruct_14d5dc5e matrix;

@optional
+ (CDStruct_14d5dc5e)globalTransformWithObject:(MDLObject *)arg1 atTime:(double)arg2;
- (CDStruct_14d5dc5e)localTransformAtTime:(double)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1;
- (void)setLocalTransform:(CDStruct_14d5dc5e)arg1 forTime:(double)arg2;
@end

