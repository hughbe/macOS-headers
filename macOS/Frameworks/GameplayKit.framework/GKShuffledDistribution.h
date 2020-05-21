//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKRandomDistribution.h>

@interface GKShuffledDistribution : GKRandomDistribution
{
    long long _delta;
    float _uniformDistance;
    long long _lastInt;
    long long _nextIntsCapacity;
    long long _nextIntsCount;
    long long *_nextInts;
}

- (long long)nextInt;
- (void)dealloc;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 delta:(long long)arg4;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (void)setUniformDistance:(float)arg1;
- (float)uniformDistance;

@end

