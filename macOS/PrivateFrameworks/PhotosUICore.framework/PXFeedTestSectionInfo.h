//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo
{
    PLPhotoLibrary *_photoLibrary;
    long long _countOfItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
- (id)photoLibrary;
- (id)captionForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)albumTitle;
- (id)date;
- (BOOL)isLoaded;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)arg1;

@end

