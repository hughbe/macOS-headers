//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCachingLayoutGenerator : PXLayoutGenerator
{
    BOOL _isValid;
    struct CGSize _contentSize;
    struct CGRect *_itemRects;
    long long *_itemKinds;
    long long _itemCapacity;
}

- (void)updateContentSize:(out struct CGSize *)arg1 itemRects:(out struct CGRect *)arg2 itemKinds:(out long long *)arg3;
- (void)updateContentSize:(out struct CGSize *)arg1 itemRects:(out struct CGRect *)arg2;
- (void)_updateIfNeeded;
- (void)invalidate;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (struct CGSize)size;
- (void)dealloc;

@end

