//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet
{
}

+ (id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)standingsSnippet;
@property(nonatomic) BOOL showCardinalPositions;
@property(copy, nonatomic) NSArray *selectedEntities;
@property(copy, nonatomic) NSArray *entities;
@property(copy, nonatomic) NSArray *columns;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

