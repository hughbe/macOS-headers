//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3MigrationDirectives : NSObject
{
    BOOL _needsToRecreateIndexes;
    BOOL _needsToRecreateTriggers;
    BOOL _needsToRemoveLocationsForItemsMissingAssets;
    BOOL _needsToReloadStoreBookmarkMetadataIdentifiers;
    BOOL _needsToReloadContainerMediaTypes;
    BOOL _needsToReloadCollectionRepresentativeItems;
    BOOL _needsAnalyze;
    BOOL _needsToAutogenerateArtworkVariants;
    BOOL _needsToUpdateSortMap;
    BOOL _forceUpdateOriginals;
    int _originalUserVersion;
    int _currentUserVersion;
}

@property(nonatomic) BOOL forceUpdateOriginals; // @synthesize forceUpdateOriginals=_forceUpdateOriginals;
@property(nonatomic) BOOL needsToUpdateSortMap; // @synthesize needsToUpdateSortMap=_needsToUpdateSortMap;
@property(nonatomic) BOOL needsToAutogenerateArtworkVariants; // @synthesize needsToAutogenerateArtworkVariants=_needsToAutogenerateArtworkVariants;
@property(nonatomic) BOOL needsAnalyze; // @synthesize needsAnalyze=_needsAnalyze;
@property(nonatomic) BOOL needsToReloadCollectionRepresentativeItems; // @synthesize needsToReloadCollectionRepresentativeItems=_needsToReloadCollectionRepresentativeItems;
@property(nonatomic) BOOL needsToReloadContainerMediaTypes; // @synthesize needsToReloadContainerMediaTypes=_needsToReloadContainerMediaTypes;
@property(nonatomic) BOOL needsToReloadStoreBookmarkMetadataIdentifiers; // @synthesize needsToReloadStoreBookmarkMetadataIdentifiers=_needsToReloadStoreBookmarkMetadataIdentifiers;
@property(nonatomic) BOOL needsToRemoveLocationsForItemsMissingAssets; // @synthesize needsToRemoveLocationsForItemsMissingAssets=_needsToRemoveLocationsForItemsMissingAssets;
@property(nonatomic) BOOL needsToRecreateTriggers; // @synthesize needsToRecreateTriggers=_needsToRecreateTriggers;
@property(nonatomic) BOOL needsToRecreateIndexes; // @synthesize needsToRecreateIndexes=_needsToRecreateIndexes;
@property(nonatomic) int currentUserVersion; // @synthesize currentUserVersion=_currentUserVersion;
@property(readonly, nonatomic) int originalUserVersion; // @synthesize originalUserVersion=_originalUserVersion;
- (id)initWithOriginalUserVersion:(int)arg1;

@end

