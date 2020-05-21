//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Montreal/MLPImageLayer.h>

@interface MLPDropoutLayer : MLPImageLayer
{
    float _dropoutRatio;
}

@property(readonly) float dropoutRatio; // @synthesize dropoutRatio=_dropoutRatio;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3;
- (id)backward:(id)arg1 inputGradient:(id)arg2;
- (id)backward:(id)arg1 index:(id)arg2 inputGradient:(id)arg3;
- (id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4;
- (id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4;
- (id)forward:(id)arg1 input:(id)arg2 index:(id)arg3 runInference:(BOOL)arg4;
- (void)createKernel;
- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 dropoutRatio:(float)arg4;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 dropoutRatio:(float)arg3;

@end

