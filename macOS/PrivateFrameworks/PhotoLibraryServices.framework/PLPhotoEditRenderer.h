//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NUBufferRenderClient, NUComposition, NUPriority, NURenderContext, PICompositionController, PLEditSource;

@interface PLPhotoEditRenderer : NSObject
{
    NSDictionary *__smartToneAdjustments;
    double _smartToneLevelInCachedAdjustments;
    NSDictionary *_smartToneStatisticsInCachedAdjustments;
    NSDictionary *__smartColorAdjustments;
    double _smartColorLevelInCachedAdjustments;
    NSDictionary *_smartColorStatisticsInCachedAdjustments;
    NSDictionary *__smartBWAdjustments;
    double _smartBWLevelInCachedAdjustments;
    PICompositionController *_compositionController;
    NUPriority *_priority;
    NUBufferRenderClient *_renderClient;
    NURenderContext *_videoRenderContext;
    NURenderContext *_geometryContext;
    NURenderContext *_smartToneAutoCalculatorContext;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    long long _smartFiltersCubeSize;
}

+ (void)updateCompositionController:(id)arg1 fromPortraitMetadata:(id)arg2;
+ (void)updateComposition:(id)arg1 fromPortraitMetadata:(id)arg2;
+ (BOOL)currentDeviceShouldAllowLocalLight;
+ (id)newImageDataFromCGImage:(struct CGImage *)arg1 withCompressionQuality:(double)arg2 metadataSourceImageURL:(id)arg3 preserveRegionsInMetadata:(BOOL)arg4;
+ (id)compositionWithController:(id)arg1 source:(id)arg2 overcaptureSource:(id)arg3;
+ (id)compositionWithController:(id)arg1 source:(id)arg2;
+ (void)configureNeutrinoCacheDirectoryIfNeeded;
- (void).cxx_destruct;
@property(nonatomic) long long smartFiltersCubeSize; // @synthesize smartFiltersCubeSize=_smartFiltersCubeSize;
@property(retain, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property(readonly, retain, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
- (void)applySourceChangesToCompositionController:(id)arg1 source:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)getGeometryForComposition:(id)arg1;
- (void)calculateLongExposureFusionParametersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_smartBWAdjustments;
- (id)_smartColorAdjustments;
- (id)_smartToneAdjustments;
@property(readonly, nonatomic) double smartBWBaseGrain;
@property(readonly, nonatomic) double smartBWBaseHue;
@property(readonly, nonatomic) double smartBWBaseTone;
@property(readonly, nonatomic) double smartBWBaseNeutralGamma;
@property(readonly, nonatomic) double smartBWBaseStrength;
- (double)_smartBWLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2;
@property(readonly, nonatomic) double smartColorBaseCast;
@property(readonly, nonatomic) double smartColorBaseSaturation;
@property(readonly, nonatomic) double smartColorBaseContrast;
- (double)_smartColorLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2;
@property(readonly, nonatomic) double smartToneBaseLocalLight;
@property(readonly, nonatomic) double smartToneBaseBlackPoint;
@property(readonly, nonatomic) double smartToneBaseShadows;
@property(readonly, nonatomic) double smartToneBaseHighlights;
@property(readonly, nonatomic) double smartToneBaseExposure;
@property(readonly, nonatomic) double smartToneBaseContrast;
@property(readonly, nonatomic) double smartToneBaseBrightness;
- (double)_smartToneLevelWithAttributeKey:(id)arg1 settingKey:(id)arg2;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (void)generateJPEGImageDataWithCompressionQuality:(double)arg1 livePhotoPairingIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)renderVideoWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 renderTime:(CDStruct_198678f7)arg4 completion:(CDUnknownBlockType)arg5;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 renderMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)renderImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) NUComposition *composition;
- (id)exportVideoToURL:(id)arg1 preset:(id)arg2 livePhotoPairingIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)newVideoExporterOptions;
- (id)newImageExporterOptions;
- (id)newExporter;
- (id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 renderPriority:(long long)arg3;
- (id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2;

@end

