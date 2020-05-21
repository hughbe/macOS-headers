//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSXPCListenerDelegate-Protocol.h>
#import <PrototypeTools/PTDomainServer-Protocol.h>
#import <PrototypeTools/PTEditingServerDataSource-Protocol.h>
#import <PrototypeTools/PTEditingServerDelegate-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>
#import <PrototypeTools/_PTSettingsRestoreDefaultsObserver-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PTDomainServer : NSObject <PTDomainServer, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, NSXPCListenerDelegate, PTEditingServerDataSource, PTEditingServerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_unregisteredClients;
    NSMutableDictionary *_clientsByDomainID;
    NSMutableDictionary *_domainInfoByID;
    NSMutableDictionary *_testRecipeInfoByID;
    NSMutableDictionary *_settingsArchivesByDomainID;
    NSMutableSet *_loadedDomainIDs;
    NSMutableDictionary *_localSettingsByClassName;
    NSMutableSet *_dirtyDomainIDs;
    BOOL _persistScheduled;
}

- (void).cxx_destruct;
- (void)_queue_invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2;
- (void)_queue_sendRestoreDefaultsForDomainID:(id)arg1;
- (void)_queue_sendArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3;
- (void)_queue_persistChanges;
- (void)_queue_schedulePersistChanges;
- (void)_queue_removeClient:(id)arg1;
- (void)_queue_restoreDefaultsForDomainID:(id)arg1;
- (void)_queue_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3;
- (id)_queue_archiveForDomainID:(id)arg1;
- (id)_queue_proxyDefinitionForDomainID:(id)arg1;
- (void)registerRootSettingsProxyDefinition:(id)arg1 forDomainID:(id)arg2;
- (void)registerTestRecipeWithInfo:(id)arg1;
- (void)registerDomainWithInfo:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)settingsDidRestoreDefaults:(id)arg1;
- (void)settingsWillRestoreDefaults:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setActiveTestRecipeID:(id)arg1;
- (void)sendEvent:(long long)arg1 forTestRecipeID:(id)arg2;
- (void)invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2;
- (void)restoreDefaultValuesForDomainID:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(id)arg2 domainID:(id)arg3;
- (id)activeTestRecipeID;
- (id)rootSettingsArchiveForDomainID:(id)arg1;
- (id)rootSettingsProxyDefinitionForDomainID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *testRecipeInfoByID;
@property(readonly, nonatomic) NSDictionary *domainInfoByID;
- (void)persistChanges;
- (id)localSettingsOfClass:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

