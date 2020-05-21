//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VKCameraRegionRestriction, VKFootprint, VKViewVolume;

__attribute__((visibility("hidden")))
@interface VKCamera : NSObject
{
    struct RunLoopController *_runLoopController;
    CDStruct_7a7719de _frustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    BOOL _needsUpdate;
    BOOL _updating;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    Matrix_6e1d3589 _forward;
    Matrix_6e1d3589 _right;
    Matrix_6e1d3589 _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    BOOL _allowDatelineWraparound;
    double _canonicalPitch;
    double _horizontalOffset;
    double _ndcZNear;
    double _aspectRatio;
    Unit_3d259e8a _verticalFieldOfView;
    double _near;
    double _far;
    double _width;
    double _height;
    RigidTransform_b9386d13 _transform;
    Matrix_08d701e4 _scaledViewMatrix;
    Matrix_08d701e4 _scaledProjectionMatrix;
    Matrix_08d701e4 _scaledViewProjectionMatrix;
    Matrix_08d701e4 _unscaledViewMatrix;
    Matrix_08d701e4 _unscaledProjectionMatrix;
    Matrix_08d701e4 _worldMatrix;
    double _maxHeightNoPitch;
    VKCameraRegionRestriction *_regionRestriction;
    optional_76e85d3d _minDistanceToGroundRestriction;
    optional_76e85d3d _maxDistanceToGroundRestriction;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) optional_76e85d3d maxDistanceToGroundRestriction; // @synthesize maxDistanceToGroundRestriction=_maxDistanceToGroundRestriction;
@property(nonatomic) optional_76e85d3d minDistanceToGroundRestriction; // @synthesize minDistanceToGroundRestriction=_minDistanceToGroundRestriction;
@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) double ndcZNear; // @synthesize ndcZNear=_ndcZNear;
@property(nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property(nonatomic) double canonicalPitch; // @synthesize canonicalPitch=_canonicalPitch;
@property(nonatomic) BOOL allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property(readonly, nonatomic) double screenHeightOfGroundAndFarClipPlaneIntersection; // @synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection;
@property(readonly, nonatomic) double distanceToGroundAndFarClipPlaneIntersection; // @synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection;
@property(nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch; // @synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property(nonatomic) double terrainHeight; // @synthesize terrainHeight=_terrainHeight;
@property(nonatomic) double maxPitch; // @synthesize maxPitch=_maxPitch;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxHeightNoPitch; // @synthesize maxHeightNoPitch=_maxHeightNoPitch;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (CameraFrame_406dbd31)cameraFrame;
- (View_a667aa2f)view:(struct ViewSize)arg1;
@property(readonly, nonatomic) const Matrix_08d701e4 *unscaledProjectionMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *unscaledViewMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *scaledViewMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *scaledProjectionMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *scaledViewProjectionMatrix;
- (void)adjustClipPlanes;
- (float)zoomAtCentrePoint;
- (float)zoomAtPoint:(struct CGPoint)arg1;
- (double)depthForViewWidth:(double)arg1;
- (double)widthOfViewAtDepth:(double)arg1;
- (Matrix_6e1d3589)groundPointFromScreenPoint:(struct CGPoint)arg1 atGroundLevel:(double)arg2;
- (Matrix_6e1d3589)groundPointFromScreenPoint:(struct CGPoint)arg1;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (Matrix_6e1d3589)groundPlaneIntersectionPoint;
- (BOOL)isOuterWorldBoundsVisible;
- (BOOL)isWorldSpaceRectVisible:(const Box_3d7e3c2c *)arg1;
- (float)maximumStyleZForRect:(const Box_3d7e3c2c *)arg1;
@property(nonatomic) struct VKCameraState cameraState;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
- (double)displayZoomLevel;
@property(readonly, nonatomic) Matrix_6e1d3589 groundPoint;
@property(readonly, nonatomic) Matrix_6e1d3589 forwardVector;
@property(readonly, nonatomic) Matrix_6e1d3589 rightVector;
@property(readonly, nonatomic) Matrix_6e1d3589 upVector;
@property(readonly, nonatomic) VKFootprint *footprint;
@property(readonly, nonatomic) VKViewVolume *viewVolume;
@property(readonly, nonatomic) double tanHalfVerticalFOV;
@property(readonly, nonatomic) double tanHalfHorizFOV;
@property(readonly, nonatomic) double nearClipDistance;
@property(readonly, nonatomic) double farClipDistance;
@property(readonly, nonatomic) Unit_3d259e8a horizontalFieldOfView;
@property(nonatomic) Unit_3d259e8a verticalFieldOfView;
@property(nonatomic) const Quaternion_febf9140 *orientation;
@property(readonly, nonatomic) CDStruct_7a7719de frustum;
@property(nonatomic) const Matrix_6e1d3589 *position;
- (Mercator3_40a88dec)mercatorPosition;
- (void)setMercatorPosition:(const Mercator3_40a88dec *)arg1;
- (void)_setPosition:(const Matrix_6e1d3589 *)arg1;
- (id)descriptionDictionaryRepresentation;
- (id)description;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithRunLoopController:(struct RunLoopController *)arg1;

@end

