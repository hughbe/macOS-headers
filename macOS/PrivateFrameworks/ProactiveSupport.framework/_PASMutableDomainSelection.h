//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection
{
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)_decrementCountAndMaybePruneItems:(id)arg1;
- (BOOL)isEqualToDomainSelection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)addDomainsFromSelection:(id)arg1;
- (BOOL)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(BOOL)arg3;
- (BOOL)_addDomainsFrom:(id)arg1;
- (BOOL)addDomainsFromSet:(id)arg1;
- (BOOL)addDomainsFromArray:(id)arg1;
- (BOOL)addDomain:(id)arg1;
- (BOOL)isEmpty;
- (id)allDomains;
- (BOOL)containsDomain:(id)arg1;
- (void)dealloc;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (id)init;

@end

