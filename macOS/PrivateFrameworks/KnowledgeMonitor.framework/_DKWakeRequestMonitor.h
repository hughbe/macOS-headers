//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDate, NSObject, NSString;
@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor
{
    BOOL _updateTimerResumed;
    int _wakeRequestToken;
    NSDate *_nextUserVisibleWakeRequestDate;
    NSString *_nextUserVisibleWakeRequestor;
    NSObject<OS_dispatch_source> *_updateTimer;
}

+ (id)entitlements;
+ (id)eventStream;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) int wakeRequestToken; // @synthesize wakeRequestToken=_wakeRequestToken;
@property(retain, nonatomic) NSString *nextUserVisibleWakeRequestor; // @synthesize nextUserVisibleWakeRequestor=_nextUserVisibleWakeRequestor;
@property(retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate; // @synthesize nextUserVisibleWakeRequestDate=_nextUserVisibleWakeRequestDate;
- (void)obtainNextUserVisibleWakeRequest;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)stop;
- (void)start;
- (id)loadState;
- (void)saveState;
- (void)dealloc;

@end

