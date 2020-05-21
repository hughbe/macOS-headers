//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSDeveloperServiceProtocol-Protocol.h>
#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSString, VSPersistentContainer, VSRemoteNotifier;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>
{
    VSPersistentContainer *_persistentContainer;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    VSRemoteNotifier *_serviceChangeRemoteNotifier;
    VSRemoteNotifier *_settingsChangeRemoteNotifier;
    VSRemoteNotifier *_providersChangeRemoteNotifier;
    VSRemoteNotifier *_accountStoreChangeRemoteNotifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier; // @synthesize accountStoreChangeRemoteNotifier=_accountStoreChangeRemoteNotifier;
@property(retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier; // @synthesize providersChangeRemoteNotifier=_providersChangeRemoteNotifier;
@property(retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier; // @synthesize settingsChangeRemoteNotifier=_settingsChangeRemoteNotifier;
@property(retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier; // @synthesize serviceChangeRemoteNotifier=_serviceChangeRemoteNotifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue; // @synthesize settingsQueue=_settingsQueue;
@property(retain, nonatomic) VSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void)updateDeveloperSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeveloperSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_nullableObjectOrNSNull:(id)arg1;
- (void)_noteProvidersDidChange;
- (void)_noteSettingsDidChange;
- (void)_noteServiceDidChange;
- (void)_performIdentityProviderBlock:(CDUnknownBlockType)arg1;
- (id)_developerIdentityProviderInContext:(id)arg1;
- (id)_identityProviderFetchRequest;
- (void)migrateSettingsPropertyFileIfNecessary;
- (id)legacySettingsPropertiesPath;
- (id)settingsPropertiesURL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

