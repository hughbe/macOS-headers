//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialBusinessMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_businessNode;
    long long _year;
}

- (void).cxx_destruct;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *businessNode; // @synthesize businessNode=_businessNode;
- (void)addMomentNode:(id)arg1;
@property(readonly) NSString *business;
- (id)initWithBusinessNode:(id)arg1 year:(long long)arg2;

@end

