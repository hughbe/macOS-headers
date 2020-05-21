//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKScreenCanvas.h>

#import <VectorKit/VKInteractiveMap-Protocol.h>
#import <VectorKit/VKMapModelDelegate-Protocol.h>

@class NSArray, NSString, VKMapModel, VKTimedAnimation;
@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap>
{
    VKMapModel *_map;
    struct CGSize _lastCanvasSize;
    optional_44235073 _lastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    double _canonicalSkyHeight;
    struct shared_ptr<md::OverlayContainer> _overlayContainer;
    BOOL _trafficEnabled;
    id <VKInteractiveMapDelegate> _delegate;
}

+ (BOOL)supportsMapType:(int)arg1 scale:(int)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) double canonicalSkyHeight; // @synthesize canonicalSkyHeight=_canonicalSkyHeight;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKMapModel *map; // @synthesize map=_map;
- (void)populateDebugNode:(struct DebugTreeNode *)arg1 withOptions:(const bitset_dc343b9a *)arg2;
- (id)navigationPuck;
- (long long)tileSize;
- (float)currentRoadSignOffset;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1;
- (void)clearScene;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelDidReloadStylesheet:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (BOOL)isPointValidForGesturing:(struct CGPoint)arg1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)updateOverlays;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (void)updateCameraForFrameResize;
- (optional_44235073)_zoomLevelForCanvasSize:(struct CGSize)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (void)_updateViewTransform;
- (id)consoleString:(BOOL)arg1;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithMapEngine:(struct MapEngine *)arg1 inBackground:(BOOL)arg2;
- (void)transferStateFromCanvas:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)reloadStylesheet;
- (void)requestStylesheetMapDisplayStyle:(struct DisplayStyle)arg1 animated:(BOOL)arg2;
- (void)setMapType:(int)arg1 animated:(BOOL)arg2;
- (void)setMapType:(int)arg1;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

