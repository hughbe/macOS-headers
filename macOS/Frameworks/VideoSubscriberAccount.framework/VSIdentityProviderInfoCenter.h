//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, VSAccountStore, VSIdentityProvider, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject
{
    VSPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_privateQueue;
    VSAccountStore *_accountStore;
    VSIdentityProvider *_cachedIdentityProvider;
    NSString *_cachedDesignatedAppBundleIdentifier;
}

+ (id)sharedCenter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cachedDesignatedAppBundleIdentifier; // @synthesize cachedDesignatedAppBundleIdentifier=_cachedDesignatedAppBundleIdentifier;
@property(retain, nonatomic) VSIdentityProvider *cachedIdentityProvider; // @synthesize cachedIdentityProvider=_cachedIdentityProvider;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
- (id)_value:(id)arg1 withDefault:(id)arg2;
- (void)_accountStoreDidChange;
- (void)enqueueIdentityProviderAppsQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueInfoQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

