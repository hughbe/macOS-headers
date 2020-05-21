//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

@interface PHAMADWorker : PHAWorker
{
    struct os_unfair_lock_s _lock;
    BOOL _turboProcessingEnabled;
    BOOL _assetProcessingComplete;
}

+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
+ (BOOL)mediaanalysisdSceneProcessingEnabled;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (id)statusAsDictionary;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;

@end

