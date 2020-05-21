//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXImportAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXImportMediaProviderNotificationsReceiver-Protocol.h>

@class NSMutableArray, NSObject, NSString, PXImportAssetsDataSource, PXImportAssetsDataSourceManager, PXImportController;
@protocol OS_dispatch_queue;

@interface PXImportMediaLoadingCoordinator : PXObservable <PXImportAssetsDataSourceManagerObserver, PXImportMediaProviderNotificationsReceiver>
{
    NSObject<OS_dispatch_queue> *_modelQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _paused;
    PXImportController *_importController;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    NSMutableArray *_thumbnailWorkItemUuids;
    PXImportAssetsDataSource *_dataSource;
    unsigned long long _completedDataSourceIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long completedDataSourceIdentifier; // @synthesize completedDataSourceIdentifier=_completedDataSourceIdentifier;
@property(retain, nonatomic) PXImportAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *thumbnailWorkItemUuids; // @synthesize thumbnailWorkItemUuids=_thumbnailWorkItemUuids;
@property(readonly, nonatomic) PXImportAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) __weak PXImportController *importController; // @synthesize importController=_importController;
@property(nonatomic, setter=setPaused:) BOOL paused; // @synthesize paused=_paused;
- (void)mediaProviderThumbnailingBecameIdle;
- (void)_processItemIfPossible;
- (id)dequeueNextThumbnailWorkItem;
- (void)handleNewDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)shutdown;
- (id)initWithImportController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

