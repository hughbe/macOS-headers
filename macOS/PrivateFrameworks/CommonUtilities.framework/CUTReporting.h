//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTPromise;

@interface CUTReporting : NSObject
{
    struct os_unfair_lock_s _promiseLock;
    CUTPromise *_promise;
}

+ (id)_rtcReportingSession;
+ (id)RTCSessionPromiseWithBatchingInterval:(double)arg1;
+ (void)startRTCReportingSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)reportingSession;
- (void).cxx_destruct;
@property(readonly) struct os_unfair_lock_s promiseLock; // @synthesize promiseLock=_promiseLock;
@property(retain, nonatomic) CUTPromise *promise; // @synthesize promise=_promise;
- (void)_failSeal:(id)arg1 withError:(id)arg2;
- (void)_fullfillSeal:(id)arg1 withSession:(id)arg2;
- (void)_startConfigurationOfSession:(id)arg1 withPromiseSeal:(id)arg2;
- (void)_beginPromiseTimeoutWithInterval:(long long)arg1;
- (id)_RTCSessionPromiseWithBatchingInterval:(double)arg1;
- (id)init;

@end

