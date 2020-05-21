//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAEditDescription.h>

@interface DGDescription : IPAEditDescription
{
    struct PFIntSize_st _inputSize;
    long long _orientation;
    long long _renderPipelineVersion;
}

+ (id)presetifyAdjustmentStack:(id)arg1;
+ (id)operationOrderingForPipelineVersion:(long long)arg1;
+ (id)descriptionWithOperations:(id)arg1 orientation:(long long)arg2 inputSize:(struct PFIntSize_st)arg3 pipelineVersion:(long long)arg4;
+ (void)_validateParameters:(id)arg1 orientation:(long long)arg2 inputSize:(struct PFIntSize_st)arg3 pipelineVersion:(long long)arg4;
@property(readonly) struct PFIntSize_st inputSize; // @synthesize inputSize=_inputSize;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)archivalRepresentation;
- (BOOL)isEqualToDescription:(id)arg1;
- (id)_debugDescriptionSuffix;
- (BOOL)hasOnlyMigratableAdjustments;
- (BOOL)hasEnabledOperations;
- (id)rawMethodVersion;
@property(readonly) long long renderPipelineVersion;
@property(readonly) long long orientation;
- (BOOL)isForRawImage;
- (BOOL)needsAutoCalculation;
- (id)descriptionWithInputSize:(struct PFIntSize_st)arg1;
- (id)descriptionWithPipelineVersion:(long long)arg1;
- (id)descriptionWithOrientation:(long long)arg1;
- (id)descriptionWithOperations:(id)arg1;
- (id)initWithOperations:(id)arg1 orientation:(long long)arg2 inputSize:(struct PFIntSize_st)arg3 pipelineVersion:(long long)arg4;
- (id)initWithOperations:(id)arg1;
- (id)init;
- (id)pa_descriptionByRemovingAutoEnhance;
- (BOOL)pa_isAutoEnhanceDescription;
- (id)geometryConverterForInputSize:(struct PFIntSize_st)arg1 orientation:(long long)arg2;
- (struct PFIntSize_st)legacyProcessedSizeFromInputSize:(struct PFIntSize_st)arg1 renderType:(int)arg2;
- (id)renderPipeline;

@end

