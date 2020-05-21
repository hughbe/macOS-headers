//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSedentaryTimer_Internal : NSObject
{
    NSObject<OS_dispatch_queue> *fClientQueue;
    NSObject<OS_dispatch_queue> *fDaemonQueue;
    struct CLConnectionClient *fLocationdConnection;
    BOOL _timerArmed;
}

@property(nonatomic, getter=isTimerArmed) BOOL timerArmed; // @synthesize timerArmed=_timerArmed;
- (void)_registerForAlarmsWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleAlarmDataResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handleStartStopTimerResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isActive;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

