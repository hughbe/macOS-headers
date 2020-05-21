//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSNumber, NSString, SASportsTeam;

@interface SASportsAthlete : SASportsEntity
{
}

+ (id)athleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)athlete;
@property(copy, nonatomic) NSString *weight;
@property(copy, nonatomic) NSArray *statistics;
@property(copy, nonatomic) NSArray *previousTeams;
@property(copy, nonatomic) NSString *position;
@property(copy, nonatomic) NSString *nickname;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSArray *lastGameStatistics;
@property(copy, nonatomic) NSString *jerseyNumber;
@property(copy, nonatomic) NSNumber *injured;
@property(copy, nonatomic) NSString *height;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSArray *formattedMetadataTypes;
@property(copy, nonatomic) NSArray *formattedMetadata;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSArray *careerStatistics;
@property(copy, nonatomic) NSArray *athleteMetadata;
@property(retain, nonatomic) SASportsTeam *activeTeam;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

