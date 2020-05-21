//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray, NSMutableOrderedSet, NSSet, SCNAuthoringEnvironment2, SCNManipulator, SCNNode;
@protocol SCNAuthoringEnvironmentDelegate, SCNSceneRenderer;

@interface SCNAuthoringEnvironment : NSObject
{
    struct __C3DEngineContext *_engineContext;
    id <SCNSceneRenderer> _sceneRenderer;
    _Bool _sceneRendererIsSCNView;
    struct __C3DFXProgram *_noColorProgram;
    struct __C3DFXProgram *_colorOnlyProgram;
    struct __C3DFXProgram *_colorAndTextureProgram;
    struct __C3DFXProgram *_lightProbesProgram;
    struct __C3DFXProgram *_wireframeProgram;
    CDStruct_5d7f1bfa _logsInfo;
    CDStruct_5d7f1bfa _boldLogsInfo;
    CDStruct_5d7f1bfa _dynamicLinesInfo;
    CDStruct_5d7f1bfa _dynamicLinesNoDepthTestInfo;
    CDStruct_5d7f1bfa _dynamicTrianglesInfo;
    CDStruct_5d7f1bfa _overlayDynamicLinesInfo;
    CDStruct_5d7f1bfa _overlayDynamicTriangleInfo;
    CDStruct_5d7f1bfa _textInfo;
    CDStruct_5d7f1bfa _lightProbesInfo;
    CDStruct_c23cf450 _normalTextInfo;
    CDStruct_c23cf450 _boldTextInfo;
    struct __C3DRasterizerStates *_depthOnCullOnStates;
    struct __C3DRasterizerStates *_depthOffCullOnStates;
    struct __C3DRasterizerStates *_depthOnCullOffStates;
    struct __C3DRasterizerStates *_depthOffCullOffStates;
    const void *_arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    const void *_quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    const void *_quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    double _timedRecordingExpirationTime;
    unsigned char _timedRecordingBuffer[64000];
    unsigned int _timedRecordingBufferStart;
    unsigned int _timedRecordingBufferEnd;
    long long _authoringDisplayMask;
    unsigned int _hasLighting:1;
    BOOL _shouldSnapOnGrid;
    BOOL _shouldSnapToAlign;
    BOOL _selectionIsReadonly;
    long long _editingSpace;
    BOOL _graphicalSelectionEnabled;
    MISSING_TYPE *_selectionP0;
    MISSING_TYPE *_selectionP1;
    BOOL _selecting;
    BOOL _surroundToSelect;
    NSSet *_initialSelection;
    NSMutableOrderedSet *_selection;
    NSArray *_selectedNodes;
    BOOL _isOrbiting;
    float _lastGridDistance;
    double _gridUnit;
    NSMutableArray *_visibleManipulableItems;
    void *_wireframeRenderer;
    unsigned int _consoleLineCount;
    struct {
        _Bool initialized;
        _Bool showFullStatistics;
        _Bool showRenderOptionsPanel;
        float fps;
        float waitDisplayLinkTime;
        long long pressedButtonIndex;
        struct __CFString *fpsString;
        struct __CFString *shortString;
        struct __CFString *internalString;
        unsigned int lightingStatistics[9];
        struct __C3DEngineStats stats;
    } _statisticsInfo;
    float _drawScale;
    id _delegate;
    SCNAuthoringEnvironment2 *_authEnv2;
}

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;
+ (id)rendererForSceneRenderer:(id)arg1;
+ (long long)defaultAuthoringDisplayMask;
@property(nonatomic) BOOL surroundToSelect; // @synthesize surroundToSelect=_surroundToSelect;
@property(nonatomic) BOOL graphicalSelectionEnabled; // @synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled;
@property(nonatomic) id <SCNAuthoringEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long editingSpace; // @synthesize editingSpace=_editingSpace;
@property(readonly, nonatomic) double gridUnit; // @synthesize gridUnit=_gridUnit;
@property(nonatomic) BOOL shouldSnapToAlign; // @synthesize shouldSnapToAlign=_shouldSnapToAlign;
@property(nonatomic) BOOL shouldSnapOnGrid; // @synthesize shouldSnapOnGrid=_shouldSnapOnGrid;
- (BOOL)isEditingSubComponent;
- (void)dealloc;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint)arg2 color:(id)arg3;
- (void)drawLineFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 color:(id)arg3;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
@property(readonly, nonatomic) BOOL selecting;
- (void)setSelecting:(BOOL)arg1;
- (void)endOrbiting;
- (void)beginOrbiting;
- (void)saveInitialSelection;
- (void)_updateSelectionWithSelectionFrame:(unsigned long long)arg1;
- (void)beginEditingNodes:(id)arg1;
- (void)beginEditingNode:(id)arg1;
- (id)selectedItems;
@property(readonly, nonatomic) NSArray *selectedNodes;
- (void)cancelEdition;
@property(nonatomic) long long authoringDisplayMask;
@property(readonly, nonatomic) SCNManipulator *manipulator;
@property(readonly, nonatomic) SCNNode *authoringOverlayLayer;
- (void)sceneDidChange:(id)arg1;
- (void)update;
- (id)authoringEnvironment2;
- (void)setupAuthoringEnv2;
- (void)_setupAuthoringEnv2:(id)arg1;
@property(nonatomic) BOOL selectionIsReadonly;
@property(readonly, nonatomic) struct CATransform3D viewMatrix;
- (id)renderer;
@property(readonly) id <SCNSceneRenderer> sceneRenderer;
- (id)_initWithEngineContext:(struct __C3DEngineContext *)arg1;
- (id)init;

@end

