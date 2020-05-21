//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class PXAssetsDataSource;

@interface PXCuratedLibraryInlineHeadersDataSource : PXSectionedDataSource
{
    long long _numberOfSections;
    unsigned long long _level;
    CDStruct_68723fc0 *_sectionInfos;
    PXAssetsDataSource *_assetsDataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(readonly, nonatomic) CDStruct_68723fc0 *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
- (void)dealloc;
- (id)initWithAssetsDataSource:(id)arg1 level:(unsigned long long)arg2 numberOfSections:(long long)arg3 sections:(CDStruct_68723fc0 *)arg4;

@end

