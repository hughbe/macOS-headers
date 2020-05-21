//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKCameraController-Protocol.h>

@class GEOMapRegion, NSString, VKCamera;
@protocol MDRenderTarget, VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject <VKCameraController>
{
    VKCamera *_camera;
    id <MDRenderTarget> _canvas;
    id <VKMapViewCameraDelegate> _cameraDelegate;
    BOOL _gesturing;
    unsigned long long _regionChangeCount;
    BOOL _inProgressRegionChangeIsAnimated;
    struct VKEdgeInsets _edgeInsets;
    _Bool _edgeInsetsAnimating;
    struct MapDataAccess *_mapDataAccess;
    struct AnimationRunner *_animationRunner;
    struct RunLoopController *_runLoopController;
    BOOL _staysCenteredDuringPinch;
    BOOL _staysCenteredDuringRotation;
    BOOL _isPitchEnabled;
    BOOL _isRotateEnabled;
    BOOL _allowDatelineWraparound;
}

@property(readonly, nonatomic) struct RunLoopController *runLoopController; // @synthesize runLoopController=_runLoopController;
@property(readonly, nonatomic) struct AnimationRunner *animationRunner; // @synthesize animationRunner=_animationRunner;
@property(readonly, nonatomic) struct MapDataAccess *mapDataAccess; // @synthesize mapDataAccess=_mapDataAccess;
@property(nonatomic) BOOL allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property(nonatomic) BOOL isRotateEnabled; // @synthesize isRotateEnabled=_isRotateEnabled;
@property(nonatomic) BOOL isPitchEnabled; // @synthesize isPitchEnabled=_isPitchEnabled;
@property(nonatomic) BOOL staysCenteredDuringRotation; // @synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation;
@property(nonatomic) BOOL staysCenteredDuringPinch; // @synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch;
- (void)populateDebugNode:(struct DebugTreeNode *)arg1 withOptions:(const bitset_dc343b9a *)arg2;
- (BOOL)centerCoordinate:(CDStruct_c3b9c2ee *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;
- (void)updateWithTimestamp:(double)arg1;
- (BOOL)wantsTimerTick;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double maxPitch;
@property(nonatomic) double pitch;
@property(readonly, nonatomic) double presentationHeading;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)updateCameraToPositionOrientationLimits;
- (void)stylesheetDidReload;
- (void)stylesheetDidChange;
@property(readonly, nonatomic) BOOL isRotated;
@property(readonly, nonatomic) BOOL isFullyPitched;
@property(readonly, nonatomic) BOOL isPitched;
@property(readonly, nonatomic) BOOL canRotate;
@property(readonly, nonatomic) BOOL canPitch;
- (BOOL)canZoomOutForTileSize:(long long)arg1;
- (BOOL)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (BOOL)edgeInsetsAnimating;
- (void)setEdgeInsetsAnimating:(BOOL)arg1;
- (struct VKEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerScreenPoint;
- (id)detailedDescription;
- (void)checkAndResetRegionChangeCount;
- (BOOL)isChangingRegion;
- (BOOL)isAnimating;
- (void)endRegionChange;
- (void)beginRegionChange:(BOOL)arg1;
- (void)canvasDidLayout;
- (void)setGesturing:(BOOL)arg1;
- (BOOL)isGesturing;
- (void)setCameraDelegate:(id)arg1;
- (id)cameraDelegate;
- (void)setCanvas:(id)arg1;
- (id)canvas;
- (id)camera;
- (void)setCamera:(id)arg1;
- (void)dealloc;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

