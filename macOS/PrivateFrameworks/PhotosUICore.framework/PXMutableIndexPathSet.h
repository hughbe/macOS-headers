//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXIndexPathSet.h>

@interface PXMutableIndexPathSet : PXIndexPathSet
{
}

- (void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeAllIndexPaths;
- (void)minusIndexPathSet:(id)arg1;
- (void)unionIndexPathSet:(id)arg1;
- (void)removeIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)addIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

