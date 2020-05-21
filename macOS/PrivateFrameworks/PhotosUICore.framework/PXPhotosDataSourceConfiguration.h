//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, PHAsset, PHFetchResult, PHPhotoLibrary;

@interface PXPhotosDataSourceConfiguration : NSObject
{
    BOOL _hideHiddenAssets;
    PHFetchResult *_collectionListFetchResult;
    unsigned long long _options;
    NSDictionary *_existingAssetCollectionFetchResults;
    NSDictionary *_existingKeyAssetsFetchResults;
    PHAsset *_referenceAsset;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    NSArray *_filterPersons;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_fetchPropertySets;
    long long _curationType;
}

- (void).cxx_destruct;
@property(nonatomic) long long curationType; // @synthesize curationType=_curationType;
@property(retain, nonatomic) NSArray *fetchPropertySets; // @synthesize fetchPropertySets=_fetchPropertySets;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) BOOL hideHiddenAssets; // @synthesize hideHiddenAssets=_hideHiddenAssets;
@property(retain, nonatomic) NSArray *filterPersons; // @synthesize filterPersons=_filterPersons;
@property(retain, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults; // @synthesize existingKeyAssetsFetchResults=_existingKeyAssetsFetchResults;
@property(retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults; // @synthesize existingAssetCollectionFetchResults=_existingAssetCollectionFetchResults;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (id)initWithAssetFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

