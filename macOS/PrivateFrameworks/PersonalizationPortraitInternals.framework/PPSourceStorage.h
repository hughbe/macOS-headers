//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPSourceStorage : NSObject
{
}

+ (id)statsWithMedianRefCountNeeded:(BOOL)arg1;
+ (id)statsWithDatabase:(id)arg1 medianRefCountNeeded:(BOOL)arg2;
+ (id)statsForTableWithName:(id)arg1 medianRefCountNeeded:(BOOL)arg2 txnWitness:(id)arg3;
+ (id)statsWithDatabase:(id)arg1 medianRefCountNeeded:(BOOL)arg2 table:(id)arg3 txnWitness:(id)arg4;
+ (long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3;
+ (id)createSourceWithStatement:(id)arg1;
+ (id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4;
+ (id)sha256ForSource:(id)arg1;
+ (double)matchAccuracyForSecondsFrom1970;

@end

