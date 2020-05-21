//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteQueryCacheMissAuditor, CNCache, CNObservable, NSString;
@protocol CNSchedulerProvider;

@interface CNAutocompleteQueryCacheHelper : NSObject
{
    CNCache *_cache;
    NSString *_searchString;
    CNObservable *_serverSearchObservable;
    CNAutocompleteQueryCacheMissAuditor *_cacheMissAuditor;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (BOOL)shouldCacheResults:(id)arg1;
+ (id)stringByRemovingLastCharacterFromString:(id)arg1;
+ (id)cache_os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor; // @synthesize cacheMissAuditor=_cacheMissAuditor;
@property(readonly, nonatomic) CNObservable *serverSearchObservable; // @synthesize serverSearchObservable=_serverSearchObservable;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
- (id)observablesForSearchString:(id)arg1 withCachedResults:(id)arg2;
- (id)remoteResultsForSearchString:(id)arg1 andCompletePromise:(id)arg2;
- (id)remoteResultsForSearchString:(id)arg1;
- (id)uncachedResultsObservable;
- (id)cachedFutureForSearchString:(id)arg1;
- (id)cachedResultsObservable;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3 cacheMissAuditor:(id)arg4 schedulerProvider:(id)arg5;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3;

@end

