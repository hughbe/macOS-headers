//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSMutableSet, SCNGeometry, SCNManipulator, SCNNode, SCNRenderer;

@interface SCNAuthoringEnvironment2 : NSObject
{
    NSMutableSet *_selection;
    struct __C3DScene *_scene;
    SCNNode *_layerRoot;
    SCNNode *_overlayLayerRoot;
    SCNNode *_lightRoot;
    SCNNode *_cameraRoot;
    SCNNode *_particlesRoot;
    SCNNode *_physicsFieldsRoot;
    SCNNode *_cameraTarget;
    SCNNode *_pointsOfViewRoot;
    struct __CFDictionary *_lightsDictionary;
    struct __CFDictionary *_camerasDictionary;
    struct __CFDictionary *_particlesDictionary;
    struct __CFDictionary *_physicsFieldsDictionary;
    SCNRenderer *_renderer;
    SCNGeometry *_lightGeometry;
    SCNGeometry *_cameraFrustumGeometry;
    SCNGeometry *_cameraOrthographicFrustumGeometry;
    SCNGeometry *_cameraGeometry;
    SCNGeometry *_cameraNearPlaneGeometry;
    SCNGeometry *_particlesGeometry;
    SCNGeometry *_fieldGeometry;
    long long _displayMask;
    NSColor *_paleGreen;
    NSColor *_paleBlue;
    NSColor *_red;
    NSColor *_green;
    NSColor *_blue;
    NSColor *_cyan;
    NSColor *_yellow;
    NSColor *_orange;
    NSColor *_pink;
    NSColor *_grayLight;
    NSColor *_grayMedium;
    NSColor *_grayDark;
    NSColor *_white;
    SCNManipulator *_manipulator;
}

+ (id)authoringEnvironmentForScene:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (id)authoringEnvironmentForScene:(id)arg1;
- (id)authoringCamera:(long long)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
@property long long displayMask;
- (void)_updateRootsVisibility;
@property(readonly, nonatomic) SCNNode *authoringOverlayLayer;
@property(readonly, nonatomic) SCNNode *authoringLayer;
- (void)updateWithRenderer:(id)arg1;
- (void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 screenspaceScalingFactor:(float)arg4;
- (void)_resetLightAuthoringWithContainerNode:(id)arg1 source:(id)arg2 light:(id)arg3;
- (void)cancelSelection;
- (void)selectNodes:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removePhysicsFieldNode:(id)arg1;
- (void)addPhysicsFieldNode:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)addCameraNode:(id)arg1;
- (id)fieldGeometry;
- (id)cameraNearPlaneGeometry;
- (id)cameraOrthographicFrustumGeometry;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (void)addParticlesNode:(id)arg1;
- (void)setupParticleMeshEmitter:(id)arg1 authoringNode:(id)arg2;
- (id)particlesGeometry;
- (void)addLightNode:(id)arg1;
- (id)geometryForLightType:(id)arg1;
@property(readonly, nonatomic) SCNManipulator *manipulator;
- (id)authoringCameraNodes;
- (void)prepareScene:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

@end

