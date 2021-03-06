//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject
{
    NSArray *_currentSuggestions;
    NSMutableArray *_unvisitedSuggestions;
    NSMutableArray *_visitedSuggestions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *visitedSuggestions; // @synthesize visitedSuggestions=_visitedSuggestions;
@property(retain, nonatomic) NSMutableArray *unvisitedSuggestions; // @synthesize unvisitedSuggestions=_unvisitedSuggestions;
@property(copy, nonatomic) NSArray *currentSuggestions; // @synthesize currentSuggestions=_currentSuggestions;
- (void)removeAllSuggestions;
- (void)removeSuggestions:(id)arg1;
- (void)appendSuggestionArray:(id)arg1;
- (id)nextSuggestionsWithPageLimit:(long long)arg1;
- (id)previousSuggestions;
- (BOOL)hasPreviousSuggestions;
- (BOOL)hasNextSuggestions;
- (id)init;

@end

