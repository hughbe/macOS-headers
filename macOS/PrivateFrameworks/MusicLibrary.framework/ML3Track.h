//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Entity.h>

@interface ML3Track : ML3Entity
{
}

+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)clearPlaybackKeysFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(BOOL)arg3 usingConnection:(id)arg4;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(BOOL)arg3;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;
+ (BOOL)trackValueAreInTheCloud:(id)arg1;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletionType:(int)arg3 deletedFileSize:(long long *)arg4;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long *)arg3;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)unsettableProperties;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (BOOL)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (BOOL)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;
+ (BOOL)_writeSyncDeletesToPlistWithLibrary:(id)arg1 forPersistentIDs:(id)arg2;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToInsert;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (id)composersDefaultOrderingTerms;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (id)podcastsDefaultOrderingTerms;
+ (id)genresDefaultOrderingTerms;
+ (id)albumsByAlbumArtistDefaultOrderingTerms;
+ (id)albumsDefaultOrderingTerms;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)orderingTermsForITTGTrackOrder:(unsigned int)arg1 descending:(BOOL)arg2;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)importChaptersByParsingAsset:(id)arg1;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
- (void)updateStoreBookmarkMetadataIdentifier;
- (id)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)updateCollectionCloudStatus;
- (id)artworkTokenAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (id)rawIntegrity;
- (BOOL)updateIntegrity;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)absoluteFilePath;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (BOOL)needsVideoSnapshot;
- (BOOL)_populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 fromLibrary:(id)arg3 usingConnection:(id)arg4;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1 isProtected:(BOOL)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1;
- (id)protocolItemForDynamicUpdate;
- (id)protocolItem;
- (id)multiverseIdentifierLibraryOnly:(BOOL)arg1;
- (id)multiverseIdentifier;

@end

