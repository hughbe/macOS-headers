//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IMKCandidateList : NSObject
{
    NSArray *_candidates;
}

+ (id)candidateListWithCandidates:(id)arg1;
+ (id)candidateListWithTextFrom:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(readonly, nonatomic) BOOL hasCandidate;
- (id)initWithCandidates:(id)arg1;
- (id)initWithTextFrom:(id)arg1;
- (id)init;

@end

