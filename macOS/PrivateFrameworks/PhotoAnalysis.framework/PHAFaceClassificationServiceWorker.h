//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PVVisionIntegrating-Protocol.h>

@class NSMutableArray, NSObject, NSString, PHAAnalysisWorkerJob, PVContext, PVVisionAnalyzer, VNPersonsModel;
@protocol OS_dispatch_queue;

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
    PVContext *_context;
    PVVisionAnalyzer *_analyzer;
    VNPersonsModel *_personsModel;
    unsigned long long _numberOfAssetsToProcess;
}

+ (BOOL)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
- (void).cxx_destruct;
@property unsigned long long numberOfAssetsToProcess; // @synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess;
@property(retain) VNPersonsModel *personsModel; // @synthesize personsModel=_personsModel;
@property(retain) PVVisionAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property(retain) PVContext *context; // @synthesize context=_context;
- (void)loadPersonsModel;
- (void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned int)arg2;
- (void)processPendingAssetIdentifiers;
- (void)_cleanup;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)cooldown;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

