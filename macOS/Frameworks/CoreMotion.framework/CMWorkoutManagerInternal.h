//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMWorkout, CMWorkoutManager;
@protocol CMWorkoutManagerDelegate, OS_dispatch_queue;

@interface CMWorkoutManagerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    id <CMWorkoutManagerDelegate> fDelegate;
    CMWorkoutManager *fSender;
    CMWorkout *fWorkout;
    BOOL fResumeWorkoutOnInterrupt;
}

- (void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1;
- (void)_unregisterForWorkoutEvents;
- (void)_registerForWorkoutEvents;
- (void)_handleDaemonEvent:(id)arg1;
- (void)_handleDaemonResponse:(id)arg1;
- (void)_userDismissedWorkoutAlert;
- (void)_setSuggestedStopTimeout:(double)arg1;
- (void)_stopWorkout:(id)arg1;
- (void)_startWorkout:(id)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

