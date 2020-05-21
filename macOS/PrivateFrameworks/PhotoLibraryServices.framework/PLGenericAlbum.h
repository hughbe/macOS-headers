//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/_PLGenericAlbum.h>

#import <PhotoLibraryServices/PLAlbumProtocol-Protocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumOrigin-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappersDataOrigin-Protocol.h>
#import <PhotoLibraryServices/PLSearchableAssetCollection-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSArray, NSData, NSDate, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary;
@protocol PLIndexMappingCache;

@interface PLGenericAlbum : _PLGenericAlbum <PLSearchableAssetCollection, PLSyncableObject, PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin>
{
    NSObject<PLIndexMappingCache> *_derivedAlbums[5];
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

+ (BOOL)is1WaySyncKind:(int)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)_albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewLegacyFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewSmartAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (void)removeInvalidAlbumsAndFoldersInManagedObjectContext:(id)arg1;
+ (void)removeTrashedAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1;
+ (void)removeEmptyAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1;
+ (void)removeAllUserAlbumsAndFoldersInLibrary:(id)arg1;
+ (void)_removeAlbumsAndFolders:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)resetAlbumStateForCloudInLibrary:(id)arg1 hardReset:(BOOL)arg2;
+ (id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2;
+ (id)_unpushedParentsOfAlbums:(id)arg1;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)unableToUploadAlbumInLibrary:(id)arg1;
+ (id)trashBinAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allFavoritesAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)userLibraryAlbumInLibrary:(id)arg1;
+ (id)projectAlbumRootFolderInLibrary:(id)arg1;
+ (id)rootFolderInLibrary:(id)arg1;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)uuidFromGroupURL:(id)arg1;
+ (BOOL)isFolder:(int)arg1;
+ (BOOL)isUserCreatedForKind:(int)arg1;
+ (BOOL)isSmartAlbumForKind:(int)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)localizedTitleForAlbumKind:(int)arg1 cplEnabled:(BOOL)arg2;
+ (id)keyPathsForValuesAffectingName;
+ (id)localizedRecoveredTitle;
+ (id)defaultAlbumKindsForFetchingWithCPLEnabled:(BOOL)arg1;
+ (id)childKeyForOrdering;
+ (id)searchIndexAllowedPredicate;
+ (id)baseSearchIndexPredicate;
+ (id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForSupportedAlbumTypes;
- (void).cxx_destruct;
@property(nonatomic) BOOL didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) BOOL isRegisteredForChanges; // @synthesize isRegisteredForChanges;
- (void)enumerateDerivedIndexMappers:(CDUnknownBlockType)arg1;
- (BOOL)hasDerivedIndexMappers;
- (void)enumerateDerivedAlbums:(CDUnknownBlockType)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbum:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (id)_kindDescription;
- (void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isRootFolder;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isUserLibraryAlbum;
@property(readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isOwnPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isUserCreated;
@property(readonly, nonatomic) BOOL isSmartAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSObject *posterImage;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
- (unsigned long long)count;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
- (void)_repairTitleIfEmpty;
- (void)repairUuidAndTitleWithRecoveryReason:(const char *)arg1;
- (void)willSave;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (void)applyTrashedState:(short)arg1 cascade:(BOOL)arg2;
- (void)_applyTrashedState:(short)arg1 date:(BOOL)arg2:(id)arg3 cascade:(BOOL)arg4;
@property(readonly, nonatomic) BOOL isInTrash;
- (BOOL)canMoveToTrash;
- (void)delete;
- (id)childKeyForOrdering;
- (id)childManagedObject;
- (void)dealloc;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)searchIndexCategory;
- (id)searchIndexContents;
@property(readonly, nonatomic) NSDate *keyAssetCreationDate;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) unsigned long long numberOfAssets;
- (id)_searchableExtremityDateFromStart:(BOOL)arg1;
@property(readonly, nonatomic) NSDate *searchableEndDate;
@property(readonly, nonatomic) NSDate *searchableStartDate;
@property(readonly, nonatomic) NSString *subtitle;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)momentShare;
- (id)cplFullRecord;
@property(readonly, retain, nonatomic) id localID;
- (void)applyPropertiesFromAlbumChange:(id)arg1;
- (id)cplAlbumChangeInPhotoLibrary:(id)arg1;
- (id)_scopedIdentifier;

// Remaining properties
@property(readonly, retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(nonatomic) unsigned long long batchSize;
@property(nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *importSessionID; // @dynamic importSessionID;
@property(nonatomic) BOOL isPinned; // @dynamic isPinned;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets; // @dynamic mutableAssets;
@property(nonatomic) int pendingItemsCount; // @dynamic pendingItemsCount;
@property(nonatomic) int pendingItemsType; // @dynamic pendingItemsType;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @dynamic secondaryKeyAsset;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @dynamic tertiaryKeyAsset;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property(nonatomic) short trashedState; // @dynamic trashedState;
@property(retain, nonatomic) NSData *userQueryData; // @dynamic userQueryData;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

