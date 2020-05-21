//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXSnappingController : NSObject
{
    BOOL _accumulateOffsetWhileSnapped;
    BOOL _snappedToTarget;
    BOOL __hasEnteredAttractionThreshold;
    BOOL __hasEnteredRetentionThreshold;
    BOOL __previousOffsetInvalid;
    double _snappingTarget;
    double _retentionOffsetThreshold;
    double _attractionOffsetThreshold;
    double _attractionVelocityThreshold;
    double __previousOffset;
    double __accumulatedOffset;
}

@property(nonatomic, setter=_setAccumulatedOffset:) double _accumulatedOffset; // @synthesize _accumulatedOffset=__accumulatedOffset;
@property(nonatomic, getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:) BOOL _previousOffsetInvalid; // @synthesize _previousOffsetInvalid=__previousOffsetInvalid;
@property(nonatomic, setter=_setPreviousOffset:) double _previousOffset; // @synthesize _previousOffset=__previousOffset;
@property(nonatomic, setter=_setHasEnteredRetentionThreshold:) BOOL _hasEnteredRetentionThreshold; // @synthesize _hasEnteredRetentionThreshold=__hasEnteredRetentionThreshold;
@property(nonatomic, setter=_setHasEnteredAttractionThreshold:) BOOL _hasEnteredAttractionThreshold; // @synthesize _hasEnteredAttractionThreshold=__hasEnteredAttractionThreshold;
@property(readonly, nonatomic, getter=isSnappedToTarget) BOOL snappedToTarget; // @synthesize snappedToTarget=_snappedToTarget;
@property(nonatomic) BOOL accumulateOffsetWhileSnapped; // @synthesize accumulateOffsetWhileSnapped=_accumulateOffsetWhileSnapped;
@property(nonatomic) double attractionVelocityThreshold; // @synthesize attractionVelocityThreshold=_attractionVelocityThreshold;
@property(nonatomic) double attractionOffsetThreshold; // @synthesize attractionOffsetThreshold=_attractionOffsetThreshold;
@property(nonatomic) double retentionOffsetThreshold; // @synthesize retentionOffsetThreshold=_retentionOffsetThreshold;
@property(readonly, nonatomic) double snappingTarget; // @synthesize snappingTarget=_snappingTarget;
- (void)didSnapByAttraction;
- (void)updateOffset:(inout double *)arg1 withVelocity:(double)arg2 shouldSnap:(out char *)arg3 shouldBreak:(out char *)arg4;
- (void)_reset;
- (void)interactionEnded;
- (void)interactionBegan;
- (void)_setBoolPointer:(inout char *)arg1 toValue:(BOOL)arg2;
- (BOOL)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (id)initWithSnappingTarget:(double)arg1;
- (id)init;

@end

