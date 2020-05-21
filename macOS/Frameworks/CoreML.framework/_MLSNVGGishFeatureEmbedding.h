//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLCustomModel-Protocol.h>

@class MLModelDescription;
@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface _MLSNVGGishFeatureEmbedding : NSObject <MLCustomModel>
{
    id <MLCustomModel> _featureEmbeddingModel;
    MLModelDescription *_modelDescription;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end

