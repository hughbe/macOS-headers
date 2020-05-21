//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet
{
    NSMutableDictionary *_fetchDictionariesByWorkerType;
}

+ (id)propertiesToFetch;
+ (BOOL)isToMany;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)entityName;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType; // @synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

