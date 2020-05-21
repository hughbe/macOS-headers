//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesDataSourceManager.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXMemoriesFeedDataSource, PXMemoriesFeedWidgetDataSourceManager;

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXSectionedDataSourceManagerObserver>
{
    PXMemoriesFeedWidgetDataSourceManager *_childDataSourceManager;
    PXMemoriesFeedDataSource *_childDataSource;
    struct _NSRange _dataSourceRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXMemoriesFeedDataSource *childDataSource; // @synthesize childDataSource=_childDataSource;
@property(readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *childDataSourceManager; // @synthesize childDataSourceManager=_childDataSourceManager;
@property(nonatomic) struct _NSRange dataSourceRange; // @synthesize dataSourceRange=_dataSourceRange;
- (id)_adjustChangedIndexSetIfNeeded:(id)arg1;
- (id)_adjustChangeDetailsIfNeeded:(id)arg1 previousDataSource:(id)arg2 newDataSource:(id)arg3;
- (id)_adjustDataSourceIfNeeded:(id)arg1;
- (void)_handleDataSourceChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
@property(readonly, nonatomic) BOOL shouldHandleEntireDataSource;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;
- (id)initWithMemoriesFeedWidgetDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

