//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSArray, SNVGGFeatureExtractorConfiguration;

__attribute__((visibility("hidden")))
@interface SNVGGBasedDetectorConfiguration : NSObject
{
    SNVGGFeatureExtractorConfiguration *_featureExtractorConfiguration;
    MLModel *_model;
    Class _observationClass;
    NSArray *_outputLabels;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *outputLabels; // @synthesize outputLabels=_outputLabels;
@property(readonly, nonatomic) Class observationClass; // @synthesize observationClass=_observationClass;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) SNVGGFeatureExtractorConfiguration *featureExtractorConfiguration; // @synthesize featureExtractorConfiguration=_featureExtractorConfiguration;
- (id)initWithMLModel:(id)arg1 observationClass:(Class)arg2 outputLabels:(id)arg3;

@end

