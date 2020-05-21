//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/STYWakeDataConsumer-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, STYWakeDataProvider, STYWakeDetectorDelegate;

@interface STYWakeDetector : NSObject <STYWakeDataConsumer>
{
    CDStruct_e0bc66f8 _state;
    unsigned long long _reportedUserActive;
    unsigned long long _reportedUserWake;
    unsigned long long _reportedFinalSignpost;
    NSObject<OS_dispatch_queue> *_queue;
    id <STYWakeDetectorDelegate> _delegate;
    id <STYWakeDataProvider> _dataProvider;
}

- (void).cxx_destruct;
- (BOOL)wakeDataProviderShouldResumeAfterInterruption:(id)arg1;
- (unsigned long long)wakeTypeFromSleepType:(unsigned long long)arg1;
- (id)createWakeEventFromCurrentWake;
- (BOOL)detectWake:(id *)arg1;
- (void)stopMonitoring;
- (void)consumeWakeTimestamp:(unsigned long long)arg1 ofType:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

