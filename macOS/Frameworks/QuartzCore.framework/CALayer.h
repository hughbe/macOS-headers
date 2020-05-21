//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMediaTiming-Protocol.h>
#import <QuartzCore/CAPropertyInfo-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class CAMeshTransform, NSArray, NSDictionary, NSString;
@protocol CALayerDelegate, CALayoutManager;

@interface CALayer : NSObject <CAPropertyInfo, NSSecureCoding, CAMediaTiming>
{
    struct _CALayerIvars _attr;
}

+ (double)cornerCurveExpansionFactor:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)layer;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)attributesForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (id)properties;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (id)layerWithRemoteClientId:(unsigned int)arg1;
@property BOOL invertsContentsAreFlipped;
@property BOOL allowsGroupOpacity;
@property BOOL allowsEdgeAntialiasing;
@property BOOL drawsAsynchronously;
@property double rasterizationScale;
@property BOOL rasterizationPrefersDisplayCompositing;
@property BOOL shouldRasterize;
@property(retain) id <CALayoutManager> layoutManager;
@property const struct CGPath *shadowPath;
@property double shadowRadius;
@property struct CGSize shadowOffset;
@property struct CGColor *shadowColor;
@property float shadowOpacity;
@property(copy) NSString *contentsSwizzle;
@property struct CGColor *contentsMultiplyColor;
@property double cornerRadius;
@property double borderWidth;
@property struct CGColor *borderColor;
@property(copy) NSDictionary *actions;
@property(copy) NSDictionary *separatedOptions;
@property(getter=isSeparated) BOOL separated;
@property(copy) NSDictionary *style;
@property(copy) NSString *name;
@property(retain) id compositingFilter;
@property(copy) NSArray *backgroundFilters;
@property(copy) NSArray *filters;
@property BOOL masksToBounds;
@property struct CGColor *backgroundColor;
@property float opacity;
@property float minificationFilterBias;
@property(copy) NSString *minificationFilter;
@property(copy) NSString *magnificationFilter;
@property double contentsScale;
@property BOOL contentsContainsSubtitles;
@property BOOL cornerContentsMasksEdges;
@property struct CGRect cornerContentsCenter;
@property struct CGRect contentsCenter;
@property struct CGRect contentsRect;
@property struct CATransform3D sublayerTransform;
@property BOOL needsDisplayOnBoundsChange;
@property(getter=isOpaque) BOOL opaque;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isHidden) BOOL hidden;
@property(retain) id cornerContents;
@property double anchorPointZ;
@property struct CGPoint anchorPoint;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property float speed;
@property double duration;
@property double timeOffset;
@property double beginTime;
- (void)resizeWithOldSuperlayerSize:(struct CGSize)arg1;
- (void)resizeSublayersWithOldSize:(struct CGSize)arg1;
@property unsigned int autoresizingMask;
@property BOOL continuousCorners;
@property(copy) NSString *cornerCurve;
@property unsigned long long maskedCorners;
- (void)layoutSublayers;
- (void)layoutIfNeeded;
- (struct CGSize)preferredFrameSize;
- (struct CGSize)_preferredSize;
- (BOOL)needsLayout;
- (void)setNeedsLayout;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)_contentsFormatDidChange:(id)arg1;
- (struct CGColorSpace *)_retainColorSpace;
- (void)_colorSpaceDidChange;
- (void)_display;
- (void)display;
- (int)_overrideImageFormat;
- (void)_renderBorderInContext:(struct CGContext *)arg1;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)displayIfNeeded;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)modelLayer;
- (id)presentationLayer;
- (void)_cancelAnimationTimer;
- (BOOL)_scheduleAnimationTimer;
- (id)animationKeys;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromSuperlayer;
@property id <CALayerDelegate> unsafeUnretainedDelegate;
@property __weak id <CALayerDelegate> delegate;
@property(retain) CALayer *mask;
@property(readonly) CALayer *superlayer;
@property(copy) NSArray *sublayers;
@property(copy) NSString *contentsScaling;
@property(copy) NSString *contentsGravity;
@property(copy) NSString *contentsFormat;
@property(copy) NSString *securityMode;
@property unsigned int edgeAntialiasingMask;
@property(retain) id contents;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (BOOL)contentsAreFlipped;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property struct CGRect frame;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)affineTransform;
@property struct CATransform3D transform;
@property double zPosition;
@property struct CGPoint position;
@property struct CGRect bounds;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setObservationInfo:(void *)arg1;
- (void *)observationInfo;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)CA_archivingValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (void)_dealloc;
- (id)_initWithReference:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (void)addConstraint:(id)arg1;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addState:(id)arg1;
@property(readonly) struct CGRect visibleRect;
- (struct CGRect)_visibleRectOfLayer:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1;
- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
@property BOOL acceleratesDrawing;
@property struct CGSize backgroundColorPhase;
@property struct CGSize sizeRequisition;
@property(getter=isFloating) BOOL floating;
@property BOOL allowsGroupBlending;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)arg1;
- (BOOL)wantsExtendedDynamicRangeContent;
@property BOOL allowsDisplayCompositing;
@property BOOL createsCompositingGroup;
@property BOOL preloadsCache;
@property double motionBlurAmount;
@property BOOL inheritsTiming;
@property BOOL contentsOpaque;
@property BOOL contentsDither;
@property BOOL contentsAlignsToPixels;
@property struct CGAffineTransform contentsTransform;
@property BOOL shadowPathIsBounds;
@property BOOL invertsShadow;
@property BOOL flipsHorizontalAxis;
@property BOOL sortsSublayers;
@property BOOL needsLayoutOnGeometryChange;
@property(getter=isFrozen) BOOL frozen;
@property BOOL clearsContext;
@property BOOL canDrawConcurrently;
@property BOOL literalContentsCenter;
@property BOOL hitTestsAsOpaque;
@property BOOL hitTestsContentsAlphaChannel;
@property BOOL allowsHitTesting;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)isFlipped;
- (BOOL)floating;
- (BOOL)doubleSided;
- (BOOL)opaque;
- (BOOL)hidden;
- (BOOL)CAMLTypeSupportedForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)layerDidChangeDisplay:(unsigned int)arg1;
- (id)recursiveDescription;
@property(copy) NSArray *layoutDependents;
- (void)removeLayoutDependent:(id)arg1;
- (void)addLayoutDependent:(id)arg1;
@property(copy) NSArray *presentationModifiers;
- (void)removePresentationModifier:(id)arg1;
- (void)addPresentationModifier:(id)arg1;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (id)attributesForKeyPath:(id)arg1;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (struct CGSize)size;
- (id)sublayerEnumerator;
- (id)ancestorSharedWithLayer:(id)arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)ignoresHitTesting;
- (void)layoutBelowIfNeeded;
- (BOOL)layoutIsActive;
- (void)_prepareContext:(struct CGContext *)arg1;
- (void *)regionBeingDrawn;
- (unsigned int)_renderImageCopyFlags;
- (void)setContentsChanged;
- (void)invalidateContents;
@property(copy) CAMeshTransform *meshTransform;
- (id)context;
- (void)clearHasBeenCommitted;
- (BOOL)hasBeenCommitted;
- (BOOL)drawsMipmapLevels;
- (BOOL)_canDisplayConcurrently;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)setBehaviors:(id)arg1;
- (id)behaviors;
- (void)setMass:(double)arg1;
- (double)mass;
- (BOOL)getRendererInfo:(struct _CARenderRendererInfo *)arg1 size:(unsigned long long)arg2;

// Remaining properties
@property(copy) NSArray *constraints; // @dynamic constraints;
@property struct CGSize margin; // @dynamic margin;
@property(copy) NSArray *stateTransitions; // @dynamic stateTransitions;
@property(copy) NSArray *states; // @dynamic states;

@end

