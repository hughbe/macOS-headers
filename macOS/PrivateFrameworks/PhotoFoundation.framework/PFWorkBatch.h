//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, PFWorkContext;

@interface PFWorkBatch : NSObject
{
    struct os_unfair_lock_s _lock;
    id _uuid;
    NSError *_beginResult;
    NSMutableArray *_jobs;
    NSMutableDictionary *_jobsByUuid;
    PFWorkContext *_workContext;
    NSDate *_startTime;
    NSMutableDictionary *_userInfo;
    unsigned long long _currentJobIndex;
    unsigned long long _nextJobIndex;
    unsigned long long _lastJobIndex;
}

- (void).cxx_destruct;
@property unsigned long long lastJobIndex; // @synthesize lastJobIndex=_lastJobIndex;
@property unsigned long long nextJobIndex; // @synthesize nextJobIndex=_nextJobIndex;
@property unsigned long long currentJobIndex; // @synthesize currentJobIndex=_currentJobIndex;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) PFWorkContext *workContext; // @synthesize workContext=_workContext;
@property(retain) NSMutableDictionary *jobsByUuid; // @synthesize jobsByUuid=_jobsByUuid;
@property(retain, nonatomic) NSMutableArray *jobs; // @synthesize jobs=_jobs;
@property(retain, nonatomic) NSError *beginResult; // @synthesize beginResult=_beginResult;
@property(retain) id uuid; // @synthesize uuid=_uuid;
- (id)initWithWorkContext:(id)arg1;
- (id)init;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
@property(readonly) NSArray *unprocessedJobs;
@property(readonly) unsigned long long unprocessedJobCount;
- (id)nextJob;
- (void)removeAllJobs;
- (void)removeJob:(id)arg1;
- (id)jobForUuid:(id)arg1;
- (void)addJob:(id)arg1;
@property(readonly, nonatomic) unsigned long long jobCount;

@end

