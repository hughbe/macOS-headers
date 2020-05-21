//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL, SALocalSearchReviewList;

@interface SAMovieMovie : SADomainObject
{
}

+ (id)movieWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movie;
@property(copy, nonatomic) NSDate *theatricalReleaseDate;
@property(copy, nonatomic) NSArray *theaterShowtimes;
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;
@property(copy, nonatomic) NSString *synopsis;
@property(copy, nonatomic) NSArray *studios;
@property(nonatomic) long long runtimeInMinutes;
@property(copy, nonatomic) NSURL *rottenTomatoesUri;
@property(retain, nonatomic) SALocalSearchReviewList *reviews;
@property(copy, nonatomic) NSString *rating;
@property(copy, nonatomic) NSNumber *qualityRating;
@property(copy, nonatomic) NSURL *posterUri;
@property(copy, nonatomic) NSArray *posterImages;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *lowResTrailerUri;
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForRent;
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForPurchase;
@property(nonatomic) BOOL is3d;
@property(copy, nonatomic) NSURL *iTunesUri;
@property(copy, nonatomic) NSURL *hiResTrailerUri;
@property(copy, nonatomic) NSArray *genres;
@property(copy, nonatomic) NSArray *directors;
@property(copy, nonatomic) NSArray *actors;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

