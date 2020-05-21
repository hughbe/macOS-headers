//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLFoundation/MLFoundationLayer.h>

#import <MLFoundation/MLFoundationLayerCompiling-Protocol.h>

@class MLFoundationTensor, NSString;

@interface MLFoundationBatchNormalizationLayer : MLFoundationLayer <MLFoundationLayerCompiling>
{
    float _varianceEpsilon;
    float _momentum;
    unsigned long long _featureChannelCount;
    MLFoundationTensor *_mean;
    MLFoundationTensor *_variance;
    MLFoundationTensor *_beta;
    MLFoundationTensor *_gamma;
}

+ (id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 variance_epsilon:(float)arg6 momentum:(float)arg7;
+ (id)layerWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 variance_epsilon:(float)arg6;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) float momentum; // @synthesize momentum=_momentum;
@property(readonly, nonatomic) float varianceEpsilon; // @synthesize varianceEpsilon=_varianceEpsilon;
@property(readonly, nonatomic) MLFoundationTensor *gamma; // @synthesize gamma=_gamma;
@property(readonly, nonatomic) MLFoundationTensor *beta; // @synthesize beta=_beta;
@property(readonly, nonatomic) MLFoundationTensor *variance; // @synthesize variance=_variance;
@property(readonly, nonatomic) MLFoundationTensor *mean; // @synthesize mean=_mean;
@property(readonly, nonatomic) unsigned long long featureChannelCount; // @synthesize featureChannelCount=_featureChannelCount;
@property(readonly, copy) NSString *description;
- (BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)initWithFeatureChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 variance_epsilon:(float)arg6 momentum:(float)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

