//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Suggestions/SGTSearchQuerySuggester.h>

@class SGTCoreSpotlightCollector;

@interface SGTCoreSpotlightBasedSuggester : SGTSearchQuerySuggester
{
    SGTCoreSpotlightCollector *_collector;
}

+ (id)suggesterForMails;
+ (id)suggesterForFiles;
- (void).cxx_destruct;
- (id)rankingQueriesForQuery:(id)arg1;
- (id)collector;

@end

