//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXCollectionsDataSource : PXSectionedDataSource
{
    id _content;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id content; // @synthesize content=_content;
- (long long)countForCollection:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)indexPathForCollection:(id)arg1;

@end

