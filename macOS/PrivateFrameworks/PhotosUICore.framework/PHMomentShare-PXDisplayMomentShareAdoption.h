//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMomentShare.h>

#import <PhotosUICore/PXDisplayMomentShare-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface PHMomentShare (PXDisplayMomentShareAdoption) <PXDisplayMomentShare, PXMediaTypeAggregating>
@property(readonly, nonatomic) long long px_momentShareType;
@property(readonly, nonatomic) long long aggregateMediaType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isAggregation;
@property(readonly, nonatomic) BOOL isEnriched;
@property(readonly, nonatomic) BOOL isEnrichmentComplete;
@property(readonly, nonatomic) BOOL isRecent;
@property(readonly, nonatomic) NSString *localizedDateDescription;
@property(readonly, nonatomic) NSString *localizedDebugDescription;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedSmartDescription;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) BOOL px_canRearrangeContent;
@property(readonly, nonatomic) unsigned short px_highlightEnrichmentState;
@property(readonly, nonatomic) long long px_highlightKind;
@property(readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) BOOL px_isFavoriteMemoriesSmartFolder;
@property(readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) BOOL px_isFolder;
@property(readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property(readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property(readonly, nonatomic) BOOL px_isImportSessionCollection;
@property(readonly, nonatomic) BOOL px_isImportedAlbum;
@property(readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property(readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property(readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property(readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property(readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property(readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property(readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property(readonly, nonatomic) BOOL px_isProject;
@property(readonly, nonatomic) BOOL px_isProjectsFolder;
@property(readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRegularAlbum;
@property(readonly, nonatomic) BOOL px_isRegularFolder;
@property(readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property(readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) BOOL px_isSharedAlbum;
@property(readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
@property(readonly, nonatomic) BOOL px_isSmartAlbum;
@property(readonly, nonatomic) BOOL px_isSmartFolder;
@property(readonly, nonatomic) BOOL px_isStandInAlbum;
@property(readonly, nonatomic) BOOL px_isTopLevelFolder;
@property(readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property(readonly, nonatomic) BOOL px_isUserCreated;
@property(readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property(readonly, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) unsigned short status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long uploadedPhotosCount;
@property(readonly, nonatomic) unsigned long long uploadedVideosCount;
@property(readonly, nonatomic) unsigned long long videosCount;
@end

