//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseImprover.h>

#import <MapsSuggestions/MapsSuggestionsImprover-Protocol.h>

@class NSString;

@interface MapsSuggestionsHotelImprover : MapsSuggestionsBaseImprover <MapsSuggestionsImprover>
{
}

+ (BOOL)isEnabled;
- (BOOL)improveEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

