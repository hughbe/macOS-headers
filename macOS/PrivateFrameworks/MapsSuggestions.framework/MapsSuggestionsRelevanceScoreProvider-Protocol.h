//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSArray;

@protocol MapsSuggestionsRelevanceScoreProvider <MapsSuggestionsObject>
- (void)preLoad;
- (BOOL)relevanceScoreForNames:(NSArray *)arg1 addresses:(NSArray *)arg2 mapItems:(NSArray *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
@end

