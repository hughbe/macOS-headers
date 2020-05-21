//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator
{
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
    long long _socialGroupID;
}

@property(nonatomic) long long socialGroupID; // @synthesize socialGroupID=_socialGroupID;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)arg1 inFacedAssets:(id)arg2;

@end

