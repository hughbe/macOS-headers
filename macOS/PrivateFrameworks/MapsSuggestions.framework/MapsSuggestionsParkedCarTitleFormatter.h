//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseTitleFormatter.h>

#import <MapsSuggestions/MapsSuggestionsDistanceTitleFormatter-Protocol.h>

@class NSString;

@interface MapsSuggestionsParkedCarTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsDistanceTitleFormatter>
{
}

- (BOOL)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

