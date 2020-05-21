//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NLModelImpl.h>

@class MLModel, NLModelConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplML : NLModelImpl
{
    MLModel *_mlModel;
    NLModelConfiguration *_configuration;
    NSString *_inputName;
    NSString *_outputName;
}

- (void).cxx_destruct;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)configuration;
- (id)modelData;
- (id)initWithMLModel:(id)arg1 configuration:(id)arg2;
- (id)initWithModelTrainer:(id)arg1;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;

@end

