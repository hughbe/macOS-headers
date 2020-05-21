//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_xpc_object;

@interface ADBackgroundTaskRequest : NSObject
{
    BOOL _performDeferralCheck;
    NSString *_requestIdentifier;
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    NSDate *_startDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) BOOL performDeferralCheck; // @synthesize performDeferralCheck=_performDeferralCheck;
@property(retain, nonatomic) NSObject<OS_xpc_object> *criteria; // @synthesize criteria=_criteria;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (id)getPropertyAsDate:(id)arg1;
- (void)setPropertyAsDate:(id)arg1 value:(id)arg2;
- (double)getPropertyAsDouble:(id)arg1;
- (void)setPropertyAsDouble:(id)arg1 value:(double)arg2;
- (long long)getPropertyAsInteger:(id)arg1;
- (void)setPropertyAsInteger:(id)arg1 value:(long long)arg2;
- (id)getPropertyAsString:(id)arg1;
- (void)setPropertyAsString:(id)arg1 value:(id)arg2;
- (id)dictionaryRepresentation;
- (id)description;
- (void)endBackgroundDeferralCheck;
- (BOOL)taskCanContinueForTime:(id)arg1;
- (void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_backgroundDeferralCheck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)taskIsDeferred;
- (BOOL)deferTask;
@property(readonly, nonatomic) BOOL shouldDefer;
- (BOOL)finishTask;
- (BOOL)taskIsContinuing;
- (BOOL)continueTask;
- (id)copyBackgroundTaskAgentCriteria;
@property(nonatomic) long long delay;
@property(retain, nonatomic) NSString *priority;
@property(nonatomic) long long gracePeriod;
@property(nonatomic) long long backgroundTaskRetryCount;
@property(nonatomic) BOOL requiresNetworkConnectivity;
@property(nonatomic) BOOL requireClassCData;
@property(nonatomic) BOOL requireBuddyComplete;
@property(nonatomic) BOOL isCPUIntensive;
@property(nonatomic) BOOL isRepeating;
@property(nonatomic) BOOL requireSleep;
@property(nonatomic) BOOL allowBattery;
- (id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3;
- (id)initWithID:(id)arg1;

@end

