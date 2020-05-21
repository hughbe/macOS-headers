//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCopying-Protocol.h>

@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>
{
    BOOL _includesAllFaces;
    BOOL _semanticalDedupingEnabled;
    BOOL _semanticalDedupingUsesAdaptiveSimilarStacking;
    BOOL _movieDedupingEnabled;
    BOOL _lastPassMovieAdditionEnabled;
    BOOL _focusOnPeople;
    BOOL _focusOnInterestingItems;
    unsigned long long _duration;
    unsigned long long _precision;
    long long _cardinalMode;
    NSSet *_uuidsOfRequiredAssets;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL focusOnInterestingItems; // @synthesize focusOnInterestingItems=_focusOnInterestingItems;
@property(nonatomic) BOOL focusOnPeople; // @synthesize focusOnPeople=_focusOnPeople;
@property(copy, nonatomic) NSSet *uuidsOfRequiredAssets; // @synthesize uuidsOfRequiredAssets=_uuidsOfRequiredAssets;
@property(nonatomic) long long cardinalMode; // @synthesize cardinalMode=_cardinalMode;
@property(nonatomic, getter=lastPassMovieAdditionIsEnabled) BOOL lastPassMovieAdditionEnabled; // @synthesize lastPassMovieAdditionEnabled=_lastPassMovieAdditionEnabled;
@property(nonatomic, getter=movieDedupingIsEnabled) BOOL movieDedupingEnabled; // @synthesize movieDedupingEnabled=_movieDedupingEnabled;
@property(nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking; // @synthesize semanticalDedupingUsesAdaptiveSimilarStacking=_semanticalDedupingUsesAdaptiveSimilarStacking;
@property(nonatomic, getter=semanticalDedupingIsEnabled) BOOL semanticalDedupingEnabled; // @synthesize semanticalDedupingEnabled=_semanticalDedupingEnabled;
@property(nonatomic) BOOL includesAllFaces; // @synthesize includesAllFaces=_includesAllFaces;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDuration:(unsigned long long)arg1 precision:(unsigned long long)arg2;

@end

