//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SGTSpotlightSuggesterReserved : NSObject
{
    NSArray *attributeNames;
    NSString *baseQuery;
    NSObject<OS_dispatch_queue> *queryQueue;
    unsigned long long queryID;
    struct __MDQuery *query;
    struct __MDQuery *warmingQuery;
    NSObject<OS_dispatch_source> *warmingQueryTimer;
    NSArray *searchScope;
    NSArray *additionalAttributeNames;
    NSArray *sortingAttributeNames;
    NSMutableDictionary *shortNameToAttributes;
    NSObject<OS_dispatch_source> *fallbackTimer;
    BOOL matchesFinderFilesOnly;
    BOOL matchesSupportFiles;
    BOOL runWarmingQuery;
    BOOL canGenerateTopHits;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

