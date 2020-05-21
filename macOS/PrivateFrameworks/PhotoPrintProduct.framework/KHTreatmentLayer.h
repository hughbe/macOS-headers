//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

#import <PhotoPrintProduct/KHJSONGeneratorProtocol-Protocol.h>

@class KHLayer, KHLayerRenderer, KHTreatment, NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface KHTreatmentLayer : KHModel <KHJSONGeneratorProtocol>
{
    long long _treatmentId;
    long long _layerId;
    long long _layerType;
    long long _outside;
    long long _sequence;
    KHLayerRenderer *_renderer;
    KHTreatment *_treatment;
    KHLayer *_layer;
    NSLock *_rendererLock;
    NSMutableSet *_attributes;
    NSMutableDictionary *_attributeCategories;
}

+ (id)hostFrameAttributeKeyFromLayerAttributeKey:(id)arg1 forTreatmentLayerKey:(id)arg2;
+ (id)treatmentLayerWithTreatmentId:(long long)arg1 layerId:(long long)arg2;
+ (id)generateModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
- (long long)sortByDefault:(id)arg1;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 forPath:(struct CGPath *)arg3 atScale:(double)arg4 treatmentFactor:(double)arg5 flipped:(BOOL)arg6;
- (id)layerFrameForParentFrame:(id)arg1;
- (CDStruct_6b31c1a5)safeRectMarginForPath:(struct CGPath *)arg1 atScale:(double)arg2;
- (struct CGRect)rectForFrame:(id)arg1 atScale:(double)arg2;
- (id)assetForId:(long long)arg1;
- (id)treatmentLayerKey;
- (id)hostFrameAttributeKeyFromLayerAttributeKey:(id)arg1;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (id)attributeForKey:(id)arg1;
- (id)attributesForCategory:(id)arg1;
- (id)attributes;
- (Class)attributeClass;
- (id)layer;
- (id)treatment;
- (void)clearCache;
- (id)initWithTreatment:(id)arg1;
- (id)_renderer;
- (void)setSequence:(long long)arg1;
- (void)cacheSequence:(long long)arg1;
- (long long)sequence;
- (void)setOutside:(long long)arg1;
- (void)cacheOutside:(long long)arg1;
- (long long)outside;
- (void)setLayerType:(long long)arg1;
- (void)cacheLayerType:(long long)arg1;
- (long long)layerType;
- (void)setLayerID:(long long)arg1;
- (void)cacheLayerID:(long long)arg1;
- (long long)layerId;
- (void)setTreatmentID:(long long)arg1;
- (void)cacheTreatmentID:(long long)arg1;
- (long long)treatmentId;
- (void)remove;
- (void)unload;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithModelId:(id)arg1;
- (id)JSONRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

