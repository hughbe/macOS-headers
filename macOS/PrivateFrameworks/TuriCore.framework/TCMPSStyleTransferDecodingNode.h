//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSCNNConvolutionNode, MPSCNNInstanceNormalizationNode, MPSCNNNeuronReLUNode, MPSCNNUpsamplingNearestNode, MPSNNImageNode;

__attribute__((visibility("hidden")))
@interface TCMPSStyleTransferDecodingNode : NSObject
{
    MPSNNImageNode *_output;
    MPSCNNUpsamplingNearestNode *_upsample;
    MPSCNNConvolutionNode *_conv;
    MPSCNNInstanceNormalizationNode *_instNorm;
    MPSCNNNeuronReLUNode *_relu;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPSCNNNeuronReLUNode *relu; // @synthesize relu=_relu;
@property(retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm; // @synthesize instNorm=_instNorm;
@property(retain, nonatomic) MPSCNNConvolutionNode *conv; // @synthesize conv=_conv;
@property(retain, nonatomic) MPSCNNUpsamplingNearestNode *upsample; // @synthesize upsample=_upsample;
@property(retain, nonatomic) MPSNNImageNode *output; // @synthesize output=_output;
- (id)exportWeights:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (id)backwardPass:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;

@end

