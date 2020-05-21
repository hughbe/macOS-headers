//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKImageCanvas.h>

#import <VectorKit/MDSnapshotMap-Protocol.h>
#import <VectorKit/VKMapModelDelegate-Protocol.h>

@class NSString, VKCamera, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas : VKImageCanvas <VKMapModelDelegate, MDSnapshotMap>
{
    VKMapModel *_mapModel;
    VKCamera *_camera;
    struct MapEngine *_mapEngine;
}

- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setMapType:(int)arg1;
- (void)resetCameraController;
- (void)updateWithTimestamp:(double)arg1;
- (void)dealloc;
- (id)initWithMapEngine:(struct MapEngine *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

