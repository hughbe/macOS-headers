//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BurstClusterDivider : NSObject
{
    float dividerScore;
    int trueLocalMaximum;
    int leftImage;
    float actionAmount;
    float noiseThreshold;
    float highNoiseThreshold;
}

@property float highNoiseThreshold; // @synthesize highNoiseThreshold;
@property float noiseThreshold; // @synthesize noiseThreshold;
@property float actionAmount; // @synthesize actionAmount;
@property int trueLocalMaximum; // @synthesize trueLocalMaximum;
@property int leftImage; // @synthesize leftImage;
@property float dividerScore; // @synthesize dividerScore;
- (long long)compareActionAmounts:(id)arg1;
- (long long)compareIndices:(id)arg1;
- (long long)compareDividers:(id)arg1;

@end

