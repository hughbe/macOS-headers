//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/PRSTitleCardSection.h>

@class NSArray;

@interface PRSMovieListCardSection : PRSTitleCardSection
{
    NSArray *_movies;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *movies; // @synthesize movies=_movies;
- (long long)type;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 movies:(id)arg3;

@end

