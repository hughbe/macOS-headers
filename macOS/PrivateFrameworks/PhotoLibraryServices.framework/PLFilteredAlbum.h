//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLCloudSharedAlbumProtocol-Protocol.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>
#import <PhotoLibraryServices/PLUserEditableAlbumProtocol-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, PLPhotoLibrary;
@protocol NSObject><NSCopying, PLAlbumProtocol;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    BOOL _backingAlbumSupportsEdits;
    BOOL _backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
    BOOL isObservingContextChanges;
    int filter;
    NSObject<PLAlbumProtocol> *_backingAlbum;
    NSPredicate *predicate;
    NSArray *_filterParameters;
}

+ (id)filteredIndexesInAlbum:(id)arg1 predicate:(id)arg2;
+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2 photoLibrary:(id)arg3;
+ (id)unfilteredAlbum:(id)arg1;
+ (id)filteredAlbum:(id)arg1 intersectFilter:(int)arg2;
+ (id)filteredAlbum:(id)arg1 predicate:(id)arg2;
+ (id)filteredAlbum:(id)arg1 filter:(int)arg2 parameters:(id)arg3;
+ (id)filteredAlbum:(id)arg1 filter:(int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *filterParameters; // @synthesize filterParameters=_filterParameters;
@property(nonatomic) BOOL isObservingContextChanges; // @synthesize isObservingContextChanges;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic) int filter; // @synthesize filter;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum; // @synthesize backingAlbum=_backingAlbum;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2;
- (id)_editableBackingAlbum;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInFilteredAssetsOfObject:(id)arg1;
- (unsigned long long)countOfFilteredAssets;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)currentStateForChange;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
@property(readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
- (id)initWithBackingAlbum:(id)arg1 filter:(int)arg2 parameters:(id)arg3;
- (id)initWithBackingAlbum:(id)arg1 predicate:(id)arg2;
- (void)_commonInitWithBackingAlbum:(id)arg1 predicate:(id)arg2;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
- (void)backingContextDidChange:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(char *)arg3;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
@property(readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property(nonatomic) BOOL cloudNotificationsEnabled;
@property(readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSDate *cloudLastContributionDate;
@property(retain, nonatomic) NSDate *cloudCreationDate;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber *unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet *invitationRecords;
@property(retain, nonatomic) NSString *cloudPersonID;
@property(retain, nonatomic) NSString *publicURL;
@property(retain, nonatomic) NSDate *cloudSubscriptionDate;
@property(nonatomic) BOOL cloudOwnerIsWhitelisted;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
@property(retain, nonatomic) NSString *cloudOwnerFullName;
@property(retain, nonatomic) NSString *cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary *cloudMetadata;
@property(retain, nonatomic) NSString *cloudGUID;
- (id)_cloudSharedBackingAlbum;
- (void)batchFetchAssets:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
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
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
- (unsigned long long)count;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
@property(nonatomic) __weak NSMutableOrderedSet *_assets;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;

// Remaining properties
@property(nonatomic) unsigned long long batchSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

