//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PLAssetContainer-Protocol.h>

@class NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSPredicate, NSString, NSURL, PLPhotoLibrary;

@protocol PLAlbumProtocol <PLAssetContainer>
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isUserLibraryAlbum;
@property(readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isInTrash;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, retain, nonatomic) NSObject *posterImage;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;

@optional
@property(nonatomic) unsigned long long batchSize;
@property(readonly, copy, nonatomic) NSString *name;
- (void)setUINotificationsEnabled:(BOOL)arg1;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
@end

