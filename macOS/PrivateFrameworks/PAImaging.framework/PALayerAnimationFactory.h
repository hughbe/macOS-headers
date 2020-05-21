//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/CAAnimationDelegate-Protocol.h>

@class CALayer, CATransactionCompletionItem, NSString, PAImageContainerLayer, PAImageLayer;

@interface PALayerAnimationFactory : NSObject <CAAnimationDelegate>
{
    PAImageContainerLayer *_rootLayer;
    CALayer *_imgLayer;
    PAImageLayer *_srcLayer;
    PAImageLayer *_dstLayer;
    PAImageLayer *_bkgLayer;
    PAImageLayer *_oldLayer;
    CDStruct_921a3ed4 _tImgOld;
    CDStruct_921a3ed4 _tImgNew;
    struct CATransform3D _t3dRotOld;
    struct CATransform3D _t3dRotNew;
    struct CGPoint _pImgOld;
    struct CGPoint _pImgNew;
    struct CGPoint _aImgOld;
    struct CGPoint _aImgNew;
    struct CGRect _rootBoundsOld;
    struct CGRect _rootBoundsNew;
    struct CGPoint _rootPosOld;
    struct CGPoint _rootPosNew;
    BOOL _hasRootBoundsAnimOld;
    BOOL _hasRootBoundsAnimNew;
    BOOL _hasRootPosAnimOld;
    BOOL _hasRootPosAnimNew;
    unsigned long long _animationPhase;
    unsigned long long _animationCounter;
    unsigned long long _transactionCounter;
    CDUnknownBlockType _completionBlock;
    BOOL _aborted;
    unsigned long long _dumpCounter;
    CATransactionCompletionItem *_completionItem;
}

- (void).cxx_destruct;
@property(readonly) __weak PAImageContainerLayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void)abortAnimation;
- (void)_completeAnimations;
- (void)_completeAnimationsWhenDone;
- (void)_transactionComplete;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)_removeAnimationFromLayer:(id)arg1 forKey:(id)arg2;
- (void)_addAnimation:(id)arg1 toLayer:(id)arg2 forKey:(id)arg3;
- (void)_addAnimations:(id)arg1 toLayer:(id)arg2 key:(id)arg3;
- (void)_animateLayer:(id)arg1 property:(id)arg2 toValue:(id)arg3;
- (id)_rapidAnimationWithKeyPath:(id)arg1 toValue:(id)arg2;
- (id)_additiveTransformAnimationWithFunction:(id)arg1 toValue:(id)arg2;
- (id)_transformAnimationWithFunction:(id)arg1 toValue:(id)arg2;
- (id)_basicAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (id)_basicAnimationWithKeyPath:(id)arg1 toValue:(id)arg2;
- (void)_useBackgroundLayer;
- (void)_useNewDestinationAsBackground;
- (void)_useOldDestinationAsBackground;
- (void)_useSourceAsBackground;
- (struct CATransform3D)_perspectiveTransformWithBounds:(struct CGRect)arg1;
- (void)_setupAnimations;
- (void)_tearDownAnimationLayers;
- (void)_updateAnimationLayers;
- (void)_setUpAnimationLayers;
@property(readonly) PAImageLayer *backgroundLayer;
@property(readonly) PAImageLayer *destinationLayer;
@property(readonly) PAImageLayer *sourceLayer;
@property(readonly) CALayer *imageLayer;
- (void)commitAnimation:(CDUnknownBlockType)arg1;
- (void)beginAnimation;
- (void)_dumpLayer:(id)arg1 name:(id)arg2;
- (void)_dumpPresentationRootLayer;
- (void)_dumpRootLayer;
- (BOOL)_shouldDumpLayerTree;
- (id)initWithRootLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

