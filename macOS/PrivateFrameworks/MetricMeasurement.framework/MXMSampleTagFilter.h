//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMSampleTag.h>

#import <MetricMeasurement/NSCopying-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class NSSet;

@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding>
{
    BOOL _allowDescendents;
    NSSet *_tagPermutations;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *tagPermutations; // @synthesize tagPermutations=_tagPermutations;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(readonly, nonatomic, getter=finite) BOOL isFinite;
- (BOOL)matchesSampleWithTag:(id)arg1;
- (id)initWithTag:(id)arg1 allowDescendents:(BOOL)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL finite;

@end

