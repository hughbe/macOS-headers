//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLLight, NSArray, NSString, NSURL, SCNLight, SCNMaterialProperty;

@protocol SCNLightJSExport <JSExport>
+ (id)lightWithMDLLight:(MDLLight *)arg1;
+ (id)light;
@property(readonly, nonatomic) SCNLight *presentationLight;
@property(nonatomic) unsigned long long categoryBitMask;
@property(retain, nonatomic) NSURL *IESProfileURL;
@property(readonly, nonatomic) SCNMaterialProperty *gobo;
@property(nonatomic) double spotOuterAngle;
@property(nonatomic) double spotInnerAngle;
@property(nonatomic) double attenuationFalloffExponent;
@property(nonatomic) double attenuationEndDistance;
@property(nonatomic) double attenuationStartDistance;
@property(nonatomic) double zFar;
@property(nonatomic) double zNear;
@property(nonatomic) double orthographicScale;
@property(nonatomic) double shadowCascadeSplittingFactor;
@property(nonatomic) unsigned long long shadowCascadeCount;
@property(nonatomic) BOOL sampleDistributedShadowMaps;
@property(nonatomic) BOOL forcesBackFaceCasters;
@property(nonatomic) double maximumShadowDistance;
@property(nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property(nonatomic) double shadowBias;
@property(nonatomic) long long shadowMode;
@property(nonatomic) unsigned long long shadowSampleCount;
@property(nonatomic) struct CGSize shadowMapSize;
@property(nonatomic) double shadowRadius;
@property(retain, nonatomic) id shadowColor;
@property(nonatomic) BOOL castsShadow;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) double intensity;
@property(nonatomic) double temperature;
@property(retain, nonatomic) id color;
@property(copy, nonatomic) NSString *type;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (void)setAttribute:(id)arg1 forKey:(NSString *)arg2;
- (id)attributeForKey:(NSString *)arg1;
@end

