//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MLPLayer.h>

#import <Montreal/MLPLayerOptimizerProtocol-Protocol.h>

@class MPSLSTMDescriptor, MPSRNNMatrixTrainingLayer, NSArray, NSMutableArray, NSString;

@interface MLPLSTMLayer : MLPLayer <MLPLayerOptimizerProtocol>
{
    int _inputGateActivation;
    int _forgetGateActivation;
    int _cellGateActivation;
    int _outputGateActivation;
    int _cellToOutputActivation;
    unsigned long long _inputSize;
    unsigned long long _outputSize;
    MPSLSTMDescriptor *_lstmDesc;
    MPSRNNMatrixTrainingLayer *_filter;
    NSMutableArray *_optimizers;
    NSMutableArray *_weights;
    NSMutableArray *_weightGradients;
    NSMutableArray *_trainingStates;
    float *_initialWeights_0;
    float *_initialWeights_1;
    float *_initialBias_0;
    float *_initialBias_1;
    unsigned long long _weightAttributes;
    NSArray *_srcMatrices;
}

- (void).cxx_destruct;
@property(retain) NSArray *srcMatrices; // @synthesize srcMatrices=_srcMatrices;
@property unsigned long long weightAttributes; // @synthesize weightAttributes=_weightAttributes;
@property float *initialBias_1; // @synthesize initialBias_1=_initialBias_1;
@property float *initialBias_0; // @synthesize initialBias_0=_initialBias_0;
@property float *initialWeights_1; // @synthesize initialWeights_1=_initialWeights_1;
@property float *initialWeights_0; // @synthesize initialWeights_0=_initialWeights_0;
@property(retain) NSMutableArray *trainingStates; // @synthesize trainingStates=_trainingStates;
@property(retain) NSMutableArray *weightGradients; // @synthesize weightGradients=_weightGradients;
@property(retain) NSMutableArray *weights; // @synthesize weights=_weights;
@property(retain) NSMutableArray *optimizers; // @synthesize optimizers=_optimizers;
@property(retain) MPSRNNMatrixTrainingLayer *filter; // @synthesize filter=_filter;
@property(retain) MPSLSTMDescriptor *lstmDesc; // @synthesize lstmDesc=_lstmDesc;
@property int cellToOutputActivation; // @synthesize cellToOutputActivation=_cellToOutputActivation;
@property int outputGateActivation; // @synthesize outputGateActivation=_outputGateActivation;
@property int cellGateActivation; // @synthesize cellGateActivation=_cellGateActivation;
@property int forgetGateActivation; // @synthesize forgetGateActivation=_forgetGateActivation;
@property int inputGateActivation; // @synthesize inputGateActivation=_inputGateActivation;
@property unsigned long long outputSize; // @synthesize outputSize=_outputSize;
@property unsigned long long inputSize; // @synthesize inputSize=_inputSize;
- (id)matrixIDToString:(unsigned long long)arg1;
- (void)exportWeightsWithWeightMatrix:(id)arg1 weightID:(unsigned long long)arg2 destination:(float *)arg3 recurrent:(BOOL)arg4;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (void)updateSourceMatrix:(id)arg1 inference:(BOOL)arg2;
- (id)seqBackwardCombinedMatrix:(id)arg1 inputGradient:(id)arg2;
- (id)seqBackwardDifferentMatrices:(id)arg1 inputGradient:(id)arg2;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)seqForwardCombinedMatrix:(id)arg1 input:(id)arg2;
- (id)seqForwardDifferentMatrices:(id)arg1 input:(id)arg2;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4;
- (void)createKernel;
@property(readonly) NSArray *mlpOptimizers;
- (void)populateActivation:(int *)arg1 montrealActivationType:(long long)arg2;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (id)initWithName:(id)arg1 inputSize:(unsigned long long)arg2 outputSize:(unsigned long long)arg3 weightAttributes:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

