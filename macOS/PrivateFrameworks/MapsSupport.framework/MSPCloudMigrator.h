//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudContainerObserver-Protocol.h>

@class MSPJournal, NSArray, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface MSPCloudMigrator : NSObject <MSPCloudContainerObserver>
{
    MSPJournal *_journal;
    NSArray *_containers;
    NSOrderedSet *_migratedFavoriteIdentifiers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOrderedSet *migratedFavoriteIdentifiers; // @synthesize migratedFavoriteIdentifiers=_migratedFavoriteIdentifiers;
@property(retain, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(retain, nonatomic) MSPJournal *journal; // @synthesize journal=_journal;
- (void)cloudContainer:(id)arg1 didFetchChanges:(id)arg2;
- (void)cloudContainerDidChange:(id)arg1;
- (void)_performMigrationsForPinnedPlacesContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performMigrationsForCollectionsContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performMigrationsForHistoryContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performMigrationsForFavoritesContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPreSyncMigrationsForCollectionsContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPreSyncMigrationsForHistoryContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPreSyncMigrationsForFavoritesContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)performMigrationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performPreSyncMigrationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCloudContainers:(id)arg1;
- (id)initWithContainers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

