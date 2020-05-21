//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGDataSourceDrivenLayout-Protocol.h>

@class NSString;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout>
{
    CDStruct_5f1286c4 _updateFlags;
    BOOL _isUpdatingSublayouts;
    struct CGPoint *_sublayoutOriginsBeforeUpdate;
    long long _axis;
    double _interlayoutSpacing;
    struct NSEdgeInsets _padding;
    struct NSEdgeInsets _faultInOutsets;
    struct NSEdgeInsets _faultOutOutsets;
}

@property(nonatomic) struct NSEdgeInsets faultOutOutsets; // @synthesize faultOutOutsets=_faultOutOutsets;
@property(nonatomic) struct NSEdgeInsets faultInOutsets; // @synthesize faultInOutsets=_faultInOutsets;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)_updateSublayouts;
- (void)_updateInterlayoutSpacing;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)update;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

