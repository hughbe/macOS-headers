//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory
{
    NSSet *_personNodes;
    NSArray *_facedAssets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2;

@end

