//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IMKCandidate, IMKUIAbstractCandidateLayout, IMKUICandidate;

@protocol IMKUICandidateLayoutDelegate
- (struct CGSize)preferredSizeForItem:(IMKUICandidate *)arg1 layout:(IMKUIAbstractCandidateLayout *)arg2;
- (IMKUICandidate *)candidateItemForCandidate:(IMKCandidate *)arg1 layout:(IMKUIAbstractCandidateLayout *)arg2;
@end

