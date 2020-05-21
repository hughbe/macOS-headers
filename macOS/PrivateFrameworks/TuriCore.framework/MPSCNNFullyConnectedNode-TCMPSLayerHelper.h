//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalPerformanceShaders/MPSCNNFullyConnectedNode.h>

@class TCMPSConvolutionWeights;

@interface MPSCNNFullyConnectedNode (TCMPSLayerHelper)
+ (id)createFullyConnected:(id)arg1 inputFeatureChannels:(unsigned long long)arg2 outputFeatureChannels:(unsigned long long)arg3 inputHeight:(unsigned long long)arg4 inputWidth:(unsigned long long)arg5 weights:(id)arg6 biases:(id)arg7 label:(id)arg8 updateWeights:(BOOL)arg9 device:(id)arg10 cmdQueue:(id)arg11;
@property(retain, nonatomic) TCMPSConvolutionWeights *tc_weightsData; // @dynamic tc_weightsData;
@end

