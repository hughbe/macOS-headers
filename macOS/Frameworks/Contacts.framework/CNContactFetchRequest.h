//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNFetchRequest.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate;

@interface CNContactFetchRequest : CNFetchRequest <NSSecureCoding>
{
    BOOL _rankSort;
    BOOL _mutableObjects;
    BOOL _unifyResults;
    BOOL _disallowsEncodedFetch;
    BOOL _onlyMainStore;
    BOOL _allowsBatching;
    BOOL _shouldFailIfAccountNotYetSynced;
    NSPredicate *_predicate;
    NSArray *_keysToFetch;
    long long _sortOrder;
    unsigned long long _batchSize;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldFailIfAccountNotYetSynced; // @synthesize shouldFailIfAccountNotYetSynced=_shouldFailIfAccountNotYetSynced;
@property BOOL allowsBatching; // @synthesize allowsBatching=_allowsBatching;
@property BOOL onlyMainStore; // @synthesize onlyMainStore=_onlyMainStore;
@property unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property BOOL disallowsEncodedFetch; // @synthesize disallowsEncodedFetch=_disallowsEncodedFetch;
@property long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property BOOL mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(copy) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property BOOL rankSort; // @synthesize rankSort=_rankSort;
- (BOOL)requiresMeContactAuthorization;
- (id)effectiveKeysToFetch;
- (id)effectivePredicate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeysToFetch:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

