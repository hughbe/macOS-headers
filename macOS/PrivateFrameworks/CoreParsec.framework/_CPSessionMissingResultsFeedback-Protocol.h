//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _CPSearchResultForFeedback;

@protocol _CPSessionMissingResultsFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *results;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearResults;
@end

