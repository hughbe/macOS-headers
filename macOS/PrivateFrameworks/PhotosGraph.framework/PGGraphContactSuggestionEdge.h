//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphEdge.h>

@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphEdge
{
}

- (id)_readableStringForContactSuggestionProperty:(id)arg1;
- (unsigned long long)_genderMatch;
@property(readonly, nonatomic) BOOL personContactGenderMismatch;
@property(readonly, nonatomic) BOOL personContactGenderMatch;
@property(readonly, nonatomic) NSString *messageGroupsDebug;
@property(readonly, nonatomic) NSString *socialGroupsDebug;
@property(readonly, nonatomic) double socialGroupsConfidence;
@property(readonly, nonatomic) unsigned long long numberOfMatchedMessageGroups;
@property(readonly, nonatomic) unsigned long long numberOfMatchedRelationships;
@property(readonly, nonatomic) NSString *relationshipsDebug;
@property(readonly, nonatomic) BOOL contactFaceprintMatch;
@property(readonly, nonatomic) double facetimeFaceprintConfidence;
@property(readonly, nonatomic) unsigned long long numberOfCMMMoments;
@property(readonly, nonatomic) unsigned long long numberOfAppearancesInSharedAssets;
@property(readonly, nonatomic) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;
@property(readonly, nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property(readonly, nonatomic) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property(readonly, nonatomic) unsigned long long numberOfMomentsAtMentionedAddress;
@property(readonly, nonatomic) unsigned long long numberOfMomentsAtHome;
- (BOOL)isHighConfidence;
- (BOOL)isFilteredOut;
- (id)_stringForGenderMatch:(unsigned long long)arg1;
- (id)description;
- (double)confidence;

@end

