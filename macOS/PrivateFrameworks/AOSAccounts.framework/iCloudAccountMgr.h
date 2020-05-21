//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue;

@interface iCloudAccountMgr : NSObject
{
    NSArray *_accountCache;
    NSOperationQueue *_operationQueue;
    long long _queuedRefreshCount;
}

+ (id)sharedMgr;
- (void).cxx_destruct;
@property long long queuedRefreshCount; // @synthesize queuedRefreshCount=_queuedRefreshCount;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSArray *accountCache; // @synthesize accountCache=_accountCache;
- (id)icaAppleAccountWithPersonID:(id)arg1;
- (id)icaAppleAccountWithUsername:(id)arg1;
- (id)icaPrimaryAppleAccount;
- (void)forceReloadAccounts;
- (void)_reloadAccounts:(id)arg1;
- (id)init;

@end

