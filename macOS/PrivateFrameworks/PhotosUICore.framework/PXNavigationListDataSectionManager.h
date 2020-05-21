//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSectionManager.h>

#import <PhotosUICore/PXCollectionsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXNavigationListDataSectionManagerObserver-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, PHCollectionList, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;

@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver>
{
    NSMutableDictionary *_childDataSectionManagers;
    NSMutableDictionary *_childDataSectionIndexes;
    NSMapTable *_parentListItems;
    PHCollectionList *_collectionList;
    long long _indentationLevel;
    PXPhotoKitCollectionsDataSourceManager *_collectionsDataSourceManager;
    PXPhotoKitCollectionsDataSource *_collectionsDataSource;
}

+ (id)makeCollectionsDataSourceManagerForConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *collectionsDataSource; // @synthesize collectionsDataSource=_collectionsDataSource;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager; // @synthesize collectionsDataSourceManager=_collectionsDataSourceManager;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, copy) NSString *description;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (void)startBackgroundFetchingIfNeeded;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)createDataSection;
- (void)_requestParentForListItem:(id)arg1 hintIndex:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3 recursionHandler:(CDUnknownBlockType)arg4;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSection:(id)arg2 expanding:(BOOL)arg3;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

