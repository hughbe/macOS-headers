//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLFoundationOptimizerDescriptor : NSObject
{
    BOOL _applyGradientClipping;
    float _learningRate;
    float _gradientRescale;
    float _gradientClipMax;
    float _gradientClipMin;
    float _regularizationScale;
    int _regularizationType;
}

+ (id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7;
+ (id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4;
@property(readonly, nonatomic) int regularizationType; // @synthesize regularizationType=_regularizationType;
@property(readonly, nonatomic) float regularizationScale; // @synthesize regularizationScale=_regularizationScale;
@property(readonly, nonatomic) float gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(readonly, nonatomic) float gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(readonly, nonatomic) BOOL applyGradientClipping; // @synthesize applyGradientClipping=_applyGradientClipping;
@property(readonly, nonatomic) float gradientRescale; // @synthesize gradientRescale=_gradientRescale;
@property(readonly, nonatomic) float learningRate; // @synthesize learningRate=_learningRate;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7;

@end

