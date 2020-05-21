//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MLPLayer.h>

#import <Montreal/MLPLayerOptimizerProtocol-Protocol.h>

@class MLPOptimizer, MPSMatrix, MPSMatrixCopy, MPSMatrixNeuron, MPSMatrixSum, MPSVector, NSArray, NSString;

@interface MLPEmbeddingLayer : MLPLayer <MLPLayerOptimizerProtocol>
{
    struct vector<std::__1::map<unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>>>, std::__1::allocator<std::__1::map<unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>>>>> wordIDRepetitions;
    struct vector<float, std::__1::allocator<float>> weightsInitial;
    unsigned long long _vocabSize;
    unsigned long long _embeddingDimension;
    MPSMatrixCopy *_matrixCopy;
    const void *_initialWeights;
    MPSMatrix *_weights;
    MPSMatrix *_weightGradients;
    MLPOptimizer *_optimizer;
    MPSMatrix *_weights_mom;
    MPSMatrix *_weights_vel;
    MPSMatrixNeuron *_zeroFilter;
    MPSMatrixSum *_sumFilter;
    MPSMatrixCopy *_matrixCopyFilter;
    MPSVector *_offsetVector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) MPSVector *offsetVector; // @synthesize offsetVector=_offsetVector;
@property(retain) MPSMatrixCopy *matrixCopyFilter; // @synthesize matrixCopyFilter=_matrixCopyFilter;
@property(retain) MPSMatrixSum *sumFilter; // @synthesize sumFilter=_sumFilter;
@property(retain) MPSMatrixNeuron *zeroFilter; // @synthesize zeroFilter=_zeroFilter;
@property(retain) MPSMatrix *weights_vel; // @synthesize weights_vel=_weights_vel;
@property(retain) MPSMatrix *weights_mom; // @synthesize weights_mom=_weights_mom;
@property(retain) MLPOptimizer *optimizer; // @synthesize optimizer=_optimizer;
@property(retain) MPSMatrix *weightGradients; // @synthesize weightGradients=_weightGradients;
@property(retain) MPSMatrix *weights; // @synthesize weights=_weights;
@property const void *initialWeights; // @synthesize initialWeights=_initialWeights;
@property(retain) MPSMatrixCopy *matrixCopy; // @synthesize matrixCopy=_matrixCopy;
@property unsigned long long embeddingDimension; // @synthesize embeddingDimension=_embeddingDimension;
@property unsigned long long vocabSize; // @synthesize vocabSize=_vocabSize;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (void)seqBackward:(id)arg1 inputGradientMatrix:(id)arg2 matrixIter:(unsigned long long)arg3;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4;
- (void)createKernel;
@property(readonly) NSArray *mlpOptimizers;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 vocabSize:(unsigned long long)arg3 embeddingDimension:(unsigned long long)arg4;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

