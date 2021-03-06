//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLRegressor.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLModelSpecificationSaver-Protocol.h>
#import <CoreML/MLSupervisedOnlineUpdatable-Protocol.h>

@class NSString;

@interface MLBayesianProbitRegression : MLRegressor <MLSupervisedOnlineUpdatable, MLModelSpecificationLoader, MLModelSpecificationSaver>
{
    shared_ptr_7e6b0415 _model;
    NSString *_regressionInputFeatureName;
    NSString *_optimismInputFeatureName;
    NSString *_meanOutputFeatureName;
    NSString *_varianceOutputFeatureName;
    NSString *_pessimisticProbabilityOutputFeatureName;
    NSString *_sampledProbabilityOutputFeatureName;
    NSString *_samplingScaleInputFeatureName;
    NSString *_samplingTruncationInputFeatureName;
}

+ (BOOL)validateModelDescription:(id)arg1;
+ (_Bool)setFeatureName:(id *)arg1 to:(id)arg2 descriptions:(id)arg3;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (void)createCheckpoint;
- (BOOL)isEqualToBopr:(id)arg1;
- (shared_ptr_7e6b0415)model;
- (BOOL)isEqual:(id)arg1;
- (void)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 error:(id *)arg3;
- (void)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)convertOutputFeatureToPredictionValues:(id)arg1 event:(_Bool *)arg2 importance:(double *)arg3 error:(id *)arg4;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (double)getSamplingTruncation:(id)arg1;
- (double)getSamplingScale:(id)arg1;
- (double)getOptimism:(id)arg1;
- (double)getFeatureValue:(id)arg1 forName:(id)arg2 withType:(long long)arg3;
- (id)createRegressorResult:(struct Prediction *)arg1;
- (shared_ptr_dc1b6fff)getOneHotFeatureValues:(id)arg1 error:(id *)arg2;
- (id)getArrayFeatureValue:(id)arg1;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3 regressionInputName:(id)arg4 optimismInputName:(id)arg5 samplingScaleInputName:(id)arg6 samplingTruncationInputName:(id)arg7 meanOutputName:(id)arg8 varianceOutputName:(id)arg9 pessimisticProbabilityOutputName:(id)arg10 sampledProbabilityOutputName:(id)arg11;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (unsigned long long)FeatureCount;
- (BOOL)setFeatureCount:(unsigned long long)arg1;
- (_Bool)setOutputFeatureName:(id *)arg1 to:(id)arg2;
- (_Bool)setInputFeatureName:(id *)arg1 to:(id)arg2;
- (struct _MLModelSpecification *)saveModelToSpecification:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

