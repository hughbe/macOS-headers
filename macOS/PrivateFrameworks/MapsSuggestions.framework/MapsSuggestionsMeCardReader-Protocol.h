//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@protocol MapsSuggestionsMeCardObserver;

@protocol MapsSuggestionsMeCardReader <MapsSuggestionsObject>
- (void)removeMeCardObserver:(id <MapsSuggestionsMeCardObserver>)arg1;
- (void)addMeCardObserver:(id <MapsSuggestionsMeCardObserver>)arg1;
- (BOOL)readMeCardWithHandler:(void (^)(MapsSuggestionsMeCard *, NSError *))arg1;
@end

