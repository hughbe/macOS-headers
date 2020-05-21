//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSCNNConvolutionNode, MPSCNNNeuronReLUNode, MPSCNNPoolingAverageNode, MPSNNImageNode;

__attribute__((visibility("hidden")))
@interface TCMPSVgg16Block2 : NSObject
{
    MPSNNImageNode *_features;
    MPSNNImageNode *_output;
    MPSCNNConvolutionNode *_conv1;
    MPSCNNNeuronReLUNode *_relu1;
    MPSCNNConvolutionNode *_conv2;
    MPSCNNNeuronReLUNode *_relu2;
    MPSCNNConvolutionNode *_conv3;
    MPSCNNNeuronReLUNode *_relu3;
    MPSCNNPoolingAverageNode *_pooling;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPSCNNPoolingAverageNode *pooling; // @synthesize pooling=_pooling;
@property(retain, nonatomic) MPSCNNNeuronReLUNode *relu3; // @synthesize relu3=_relu3;
@property(retain, nonatomic) MPSCNNConvolutionNode *conv3; // @synthesize conv3=_conv3;
@property(retain, nonatomic) MPSCNNNeuronReLUNode *relu2; // @synthesize relu2=_relu2;
@property(retain, nonatomic) MPSCNNConvolutionNode *conv2; // @synthesize conv2=_conv2;
@property(retain, nonatomic) MPSCNNNeuronReLUNode *relu1; // @synthesize relu1=_relu1;
@property(retain, nonatomic) MPSCNNConvolutionNode *conv1; // @synthesize conv1=_conv1;
@property(retain, nonatomic) MPSNNImageNode *output; // @synthesize output=_output;
@property(retain, nonatomic) MPSNNImageNode *features; // @synthesize features=_features;
- (void)setLearningRate:(float)arg1;
- (id)backwardPass:(id)arg1;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;

@end

