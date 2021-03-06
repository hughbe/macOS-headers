//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDKeyValueDiskCache, CKDOperation, CKDPublicIdentityLookupService;

__attribute__((visibility("hidden")))
@interface CKDCacheBasedRequest : NSObject
{
    BOOL _isCancelled;
    CKDOperation *_operation;
    CKDKeyValueDiskCache *_cache;
    CKDPublicIdentityLookupService *_lookupService;
    unsigned long long _fetchBatchSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property(nonatomic) __weak CKDPublicIdentityLookupService *lookupService; // @synthesize lookupService=_lookupService;
@property(nonatomic) __weak CKDKeyValueDiskCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak CKDOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)performRequest;
- (id)spawnURLRequests;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (id)init;

@end

