//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLScatteringFunction.h>

@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction
{
    struct PhysicallyPlausibleDistribution *_physicalBSDF;
    MDLMaterialProperty *_subsurface;
    MDLMaterialProperty *_metallic;
    MDLMaterialProperty *_specularAmount;
    MDLMaterialProperty *_specularTint;
    MDLMaterialProperty *_roughness;
    MDLMaterialProperty *_anisotropic;
    MDLMaterialProperty *_anisotropicRotation;
    MDLMaterialProperty *_sheen;
    MDLMaterialProperty *_sheenTint;
    MDLMaterialProperty *_clearcoat;
    MDLMaterialProperty *_clearcoatGloss;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) MDLMaterialProperty *clearcoatGloss; // @synthesize clearcoatGloss=_clearcoatGloss;
@property(readonly, retain, nonatomic) MDLMaterialProperty *clearcoat; // @synthesize clearcoat=_clearcoat;
@property(readonly, retain, nonatomic) MDLMaterialProperty *sheenTint; // @synthesize sheenTint=_sheenTint;
@property(readonly, retain, nonatomic) MDLMaterialProperty *sheen; // @synthesize sheen=_sheen;
@property(readonly, retain, nonatomic) MDLMaterialProperty *anisotropicRotation; // @synthesize anisotropicRotation=_anisotropicRotation;
@property(readonly, retain, nonatomic) MDLMaterialProperty *anisotropic; // @synthesize anisotropic=_anisotropic;
@property(readonly, retain, nonatomic) MDLMaterialProperty *roughness; // @synthesize roughness=_roughness;
@property(readonly, retain, nonatomic) MDLMaterialProperty *specularTint; // @synthesize specularTint=_specularTint;
@property(readonly, retain, nonatomic) MDLMaterialProperty *specularAmount; // @synthesize specularAmount=_specularAmount;
@property(readonly, retain, nonatomic) MDLMaterialProperty *metallic; // @synthesize metallic=_metallic;
@property(readonly, retain, nonatomic) MDLMaterialProperty *subsurface; // @synthesize subsurface=_subsurface;
- (id)init;
@property(readonly, nonatomic) long long version;

@end

