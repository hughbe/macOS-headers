//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSManagingDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol DDSAssetProviding, DDSManaging, OS_dispatch_queue;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate>
{
    id <DDSAssetProviding> _provider;
    id <DDSManaging> _managerInterface;
    NSMutableSet *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) id <DDSManaging> managerInterface; // @synthesize managerInterface=_managerInterface;
@property(readonly, nonatomic) id <DDSAssetProviding> provider; // @synthesize provider=_provider;
- (void)didUpdateAssetsWithType:(id)arg1;
- (id)assertionIDsForClientID:(id)arg1;
- (void)removeAssertionWithIdentifier:(id)arg1;
- (void)addAssertionForAssetsWithQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
- (id)allContentItemsMatchingQuery:(id)arg1 error:(id *)arg2;
- (id)assetsForQuery:(id)arg1 error:(id *)arg2;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (id)initWithProvider:(id)arg1 managerInterface:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

