//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class MLModel, MLModelDescription, NSString, SNSystemConfiguration;
@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface SNFeaturePrintExtractor : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
    id <MLCustomModel> _logMelSpectrogramModel;
    MLModelDescription *_logMelSpectrogramModelDescription;
    MLModel *_featureEmbeddingModel;
    SNSystemConfiguration *_systemConfiguration;
    int _timeDomainBlockSize;
    int _resultsToDiscardCount;
    float _overlapFactor;
    long long _featurePrintType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) float overlapFactor; // @synthesize overlapFactor=_overlapFactor;
@property(nonatomic) long long featurePrintType; // @synthesize featurePrintType=_featurePrintType;
@property(readonly, nonatomic) struct Box *resultsBox;
- (void)primeGraph;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (BOOL)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)embeddingModel;
- (id)logMelSpectrogramModel;
- (id)logMelSpectrogramModelDescription;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (void)updateGraph;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

