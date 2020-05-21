//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ShotflowDetection : NSObject
{
    float _area;
    _Bool _hasLabel;
    float _confidence;
    int _mergesCount;
    int _scale;
    float _rotationAngle;
    float _yawAngle;
    int _label;
    struct CGRect _box;
    struct CGRect _defaultBox;
}

@property(nonatomic) int label; // @synthesize label=_label;
@property(nonatomic) _Bool hasLabel; // @synthesize hasLabel=_hasLabel;
@property(nonatomic) float yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) int mergesCount; // @synthesize mergesCount=_mergesCount;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect defaultBox; // @synthesize defaultBox=_defaultBox;
@property(nonatomic) struct CGRect box; // @synthesize box=_box;
- (_Bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;
- (_Bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (float)intersectionOverArea:(id)arg1;
- (float)overlap:(id)arg1;
@property(readonly, nonatomic) float smartDistance;
@property(readonly, nonatomic) float distanceToDefaultBox;
@property(readonly, nonatomic) struct CGPoint boxCenter;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasLabel:(_Bool)arg8 label:(int)arg9;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasLabel:(_Bool)arg7 label:(int)arg8;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7;
- (id)initWithBox:(struct CGRect)arg1 defaultBox:(struct CGRect)arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6;

@end

