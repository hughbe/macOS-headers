//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/PRSBaseCardSection.h>

@class NSArray;

@interface PRSTrackListCardSection : PRSBaseCardSection
{
    NSArray *_tracks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (long long)type;
- (id)initWithTracks:(id)arg1;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;

@end

