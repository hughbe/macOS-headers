//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MLPConvolutionBase.h>

@class MLPModelConvolutionDataSource;

@interface MLPConvolutionLayer : MLPConvolutionBase
{
    MLPModelConvolutionDataSource *_dataSource;
    const void *_initialWeights;
    const void *_initialBias;
}

- (void).cxx_destruct;
@property const void *initialBias; // @synthesize initialBias=_initialBias;
@property const void *initialWeights; // @synthesize initialWeights=_initialWeights;
@property(retain) MLPModelConvolutionDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4;
- (void)createKernel;
- (void)updatePrimaryCurrentState:(id)arg1 index:(id)arg2 inference:(BOOL)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6 outputChannels:(unsigned long long)arg7 neuronType:(int)arg8 neuronParams:(id)arg9;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5 outputChannels:(unsigned long long)arg6 neuronType:(int)arg7 neuronParams:(id)arg8;

@end

