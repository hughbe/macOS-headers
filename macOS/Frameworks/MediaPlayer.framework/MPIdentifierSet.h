//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPMutableIdentifierSet-Protocol.h>
#import <MediaPlayer/MPMutableLocalLibraryIdentifiers-Protocol.h>
#import <MediaPlayer/MPMutablePersonalStoreIdentifiers-Protocol.h>
#import <MediaPlayer/MPMutableRadioIdentifiers-Protocol.h>
#import <MediaPlayer/MPMutableUniversalStoreIdentifiers-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>
#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class MPModelKind, NSArray, NSString;
@protocol MPLocalLibraryIdentifiers, MPPersonalStoreIdentifiers, MPRadioIdentifiers, MPUniversalStoreIdentifiers;

@interface MPIdentifierSet : NSObject <MPMutableLocalLibraryIdentifiers, MPMutablePersonalStoreIdentifiers, MPMutableUniversalStoreIdentifiers, MPMutableRadioIdentifiers, MPMutableIdentifierSet, _MPStateDumpPropertyListTransformable, NSCopying, NSSecureCoding>
{
    BOOL _shouldExcludeFromShuffle;
    BOOL _placeholder;
    NSString *_databaseID;
    long long _persistentID;
    long long _containedPersistentID;
    long long _syncID;
    NSString *_personID;
    unsigned long long _cloudID;
    NSString *_cloudAlbumID;
    NSString *_recommendationID;
    NSString *_globalPlaylistID;
    long long _adamID;
    NSArray *_formerAdamIDs;
    NSString *_universalCloudLibraryID;
    long long _purchasedAdamID;
    long long _subscriptionAdamID;
    NSString *_socialProfileID;
    NSString *_informalMediaClipID;
    NSString *_informalStaticAssetID;
    NSString *_stationStringID;
    NSString *_stationHash;
    long long _stationID;
    NSString *_containerUniqueID;
    NSString *_handoffCorrelationID;
    NSString *_contentItemID;
    NSString *_lyricsID;
    NSString *_vendorID;
    MPModelKind *_modelKind;
}

+ (BOOL)supportsSecureCoding;
+ (id)emptyIdentifierSet;
- (void).cxx_destruct;
@property(nonatomic, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) BOOL shouldExcludeFromShuffle; // @synthesize shouldExcludeFromShuffle=_shouldExcludeFromShuffle;
@property(readonly, nonatomic) MPModelKind *modelKind; // @synthesize modelKind=_modelKind;
@property(copy, nonatomic) NSString *vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(copy, nonatomic) NSString *handoffCorrelationID; // @synthesize handoffCorrelationID=_handoffCorrelationID;
@property(copy, nonatomic) NSString *containerUniqueID; // @synthesize containerUniqueID=_containerUniqueID;
- (void)setStationID:(long long)arg1;
@property(readonly, nonatomic) long long stationID;
- (void)setStationHash:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stationHash;
- (void)setStationStringID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stationStringID;
@property(copy, nonatomic) NSString *informalStaticAssetID; // @synthesize informalStaticAssetID=_informalStaticAssetID;
@property(copy, nonatomic) NSString *informalMediaClipID; // @synthesize informalMediaClipID=_informalMediaClipID;
@property(copy, nonatomic) NSString *socialProfileID; // @synthesize socialProfileID=_socialProfileID;
- (void)setSubscriptionAdamID:(long long)arg1;
@property(readonly, nonatomic) long long subscriptionAdamID;
- (void)setPurchasedAdamID:(long long)arg1;
@property(readonly, nonatomic) long long purchasedAdamID;
- (void)setUniversalCloudLibraryID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *universalCloudLibraryID;
- (void)setFormerAdamIDs:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *formerAdamIDs;
- (void)setAdamID:(long long)arg1;
@property(readonly, nonatomic) long long adamID;
@property(copy, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
- (void)setRecommendationID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recommendationID;
- (void)setCloudAlbumID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cloudAlbumID;
- (void)setCloudID:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long cloudID;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void)setContainedPersistentID:(long long)arg1;
@property(readonly, nonatomic) long long containedPersistentID;
- (void)setPersistentID:(long long)arg1;
@property(readonly, nonatomic) long long persistentID;
@property(readonly, nonatomic) NSString *databaseID; // @synthesize databaseID=_databaseID;
- (void)_setDefaultPersonIDIfNeeded;
- (void)_setDefaultDatabaseIDIfNeeded;
- (id)identifierDescriptions;
- (id)_stateDumpObject;
@property(nonatomic) long long storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID;
@property(copy, nonatomic) NSString *storeRecommendationID;
@property(copy, nonatomic) NSString *storeCloudAlbumID;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID;
@property(nonatomic) unsigned long long storeCloudID;
@property(copy, nonatomic) NSArray *formerStoreAdamIDs;
@property(nonatomic) long long storeAdamID;
@property(nonatomic) long long radioStationID;
@property(copy, nonatomic) NSString *radioStationHash;
@property(copy, nonatomic) NSString *radioStationStringID;
@property(nonatomic) long long syncID; // @synthesize syncID=_syncID;
@property(nonatomic) long long deviceLibraryPersistentID;
- (void)setRadioIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)setUniversalStoreIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)setPersonalStoreIdentifiersWithPersonID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setLibraryIdentifiersWithDatabaseID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)unionSet:(id)arg1;
- (BOOL)hasCommonIdentifierWithIdentifierSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
@property(readonly, nonatomic) id <MPRadioIdentifiers> radio;
@property(readonly, nonatomic) id <MPUniversalStoreIdentifiers> universalStore;
@property(readonly, nonatomic) id <MPPersonalStoreIdentifiers> personalizedStore;
@property(readonly, nonatomic) id <MPLocalLibraryIdentifiers> library;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *humanDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithModelKind:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_initWithModelKind:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

