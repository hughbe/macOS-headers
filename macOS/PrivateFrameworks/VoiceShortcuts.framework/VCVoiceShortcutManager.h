//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSPersistentStoreDescription, NSString, VCCoreDataStore, VCRealmDataStore, WFDatabase;

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate>
{
    VCCoreDataStore *_coreDataStore;
    HMHomeManager *_homeManager;
    WFDatabase *_database;
    NSPersistentStoreDescription *_storeDescription;
    VCRealmDataStore *_realmDataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VCRealmDataStore *realmDataStore; // @synthesize realmDataStore=_realmDataStore;
@property(readonly, copy, nonatomic) NSPersistentStoreDescription *storeDescription; // @synthesize storeDescription=_storeDescription;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (void)requestDataMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (id)addExtraVocabForDemoIfAppropriate:(id)arg1;
- (void)requestShortcutsSpotlightFullReindex;
- (void)updateShortcutsVocabularyWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleAssistantPreferencesChangedNotification;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLSDatabaseAnchors;
- (BOOL)lsDatabaseChangedSinceLastCheck;
- (void)deleteSuggestionsFromApps:(id)arg1;
- (void)deleteStaleSuggestions;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3;
@property(readonly, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (BOOL)phraseHasHomeKitConflict:(id)arg1;
- (id)sanitizePhrase:(id)arg1;
- (void)validateVoiceShortcutPhrases:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)migrateVoiceShortcutsToBeShortcuts;
@property(readonly, nonatomic) VCCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
- (id)coreDataStoreWithError:(id *)arg1;
- (id)initWithDatabase:(id)arg1 storeDescription:(id)arg2 error:(id *)arg3;
- (id)initWithDatabase:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

