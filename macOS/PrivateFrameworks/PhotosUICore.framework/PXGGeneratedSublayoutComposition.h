//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition
{
    PXLayoutGenerator *_layoutGenerator;
    struct _PXLayoutGeometry *_layoutGeometries;
    long long _layoutGeometriesCapacity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXLayoutGenerator *configuredLayoutGenerator;
- (struct CGRect)contentBounds;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;
- (void)updateEstimatedSublayoutGeometries;
- (void)invalidateLayout;
- (void)referenceSizeDidChange;
- (void)dealloc;

@end

