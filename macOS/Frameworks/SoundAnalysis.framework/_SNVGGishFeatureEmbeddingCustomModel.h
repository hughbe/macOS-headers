//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLCustomModel-Protocol.h>

@class MLModel, MLModelDescription;

__attribute__((visibility("hidden")))
@interface _SNVGGishFeatureEmbeddingCustomModel : NSObject <MLCustomModel>
{
    MLModelDescription *_modelDescription;
    MLModel *_model;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end

