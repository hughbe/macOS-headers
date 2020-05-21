//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Suggestions/NSObject-Protocol.h>

@class NSArray, NSError, SGTSearchQueryContext;
@protocol SGTSearchQueryCollector;

@protocol SGTSearchQueryCollectorDelegate <NSObject>
- (void)searchQueryCollector:(id <SGTSearchQueryCollector>)arg1 didFailWithError:(NSError *)arg2 context:(SGTSearchQueryContext *)arg3;
- (void)searchQueryCollector:(id <SGTSearchQueryCollector>)arg1 processQueryResults:(NSArray *)arg2 context:(SGTSearchQueryContext *)arg3 intermediateResults:(BOOL)arg4;
@end

