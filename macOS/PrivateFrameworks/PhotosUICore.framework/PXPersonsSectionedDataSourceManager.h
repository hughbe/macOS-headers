//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHPhotoLibrary, PXPersonsSectionedDataSource;

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)reloadData;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (long long)_personTypeForSection:(long long)arg1;
- (id)createInitialDataSource;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXPersonsSectionedDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

