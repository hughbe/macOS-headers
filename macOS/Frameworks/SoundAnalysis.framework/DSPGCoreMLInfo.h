//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DSPGMLInputProvider, MLModelDescription, NSArray;
@protocol DSPGMLModel, MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface DSPGCoreMLInfo : NSObject
{
    id <DSPGMLModel> _model;
    MLModelDescription *_modelDescription;
    DSPGMLInputProvider *_inputProvider;
    id <MLFeatureProvider> _outputProvider;
    NSArray *_outputs;
    NSArray *_outputLabels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *outputLabels; // @synthesize outputLabels=_outputLabels;
@property(retain, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(retain, nonatomic) id <MLFeatureProvider> outputProvider; // @synthesize outputProvider=_outputProvider;
@property(retain, nonatomic) DSPGMLInputProvider *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(retain, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(retain, nonatomic) id <DSPGMLModel> model; // @synthesize model=_model;

@end

