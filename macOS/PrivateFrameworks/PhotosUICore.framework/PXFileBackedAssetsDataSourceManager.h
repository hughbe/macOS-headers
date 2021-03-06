//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSDictionary, NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager
{
    NSMutableDictionary *_fileURLsBySection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *fileURLsBySection; // @synthesize fileURLsBySection=_fileURLsBySection;
- (void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2;
- (void)_createDataSource;
- (id)initWithFileURLsBySection:(id)arg1;

@end

