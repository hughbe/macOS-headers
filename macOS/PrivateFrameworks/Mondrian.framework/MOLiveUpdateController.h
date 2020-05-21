//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol MOLiveUpdateControllerDelegate;

@interface MOLiveUpdateController : NSObject
{
    id <MOLiveUpdateControllerDelegate> _delegate;
    NSCountedSet *_inFlightUserActions;
    struct _MOLiveUpdatePendingSession _pendingSession;
    struct _MOLiveUpdatePendingSession _pendingUserActions;
    unsigned long long _currentUserActionsRepeat;
    struct {
        unsigned int delegateShouldPerformAdditionalUpdateWithDelay:1;
        unsigned int delegateDidNotPerformAnyActions:1;
        unsigned int delegateShouldReplyToUserActionsForLiveUpdateController:1;
        unsigned int delegateProvidesRetryDelay:1;
    } _flags;
}

+ (void)notifyUserActionsInProgress;
- (void).cxx_destruct;
@property(readonly) __weak id <MOLiveUpdateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelAllUpdates;
- (void)performUpdateAfterDelay:(double)arg1;
- (void)performUpdateNow;
- (void)endUserAction:(id)arg1;
- (void)beginUserAction:(id)arg1;
- (BOOL)hasUserActionInProgress;
- (BOOL)hasPendingUpdates;
- (void)_attemptUpdate;
- (double)_retryDelayForFailingAction:(SEL)arg1;
- (void)_performUpdateAfterDelay:(double)arg1 retry:(BOOL)arg2;
- (BOOL)_requestUserActionUpdate;
- (void)_setUserActionsModeForDelay:(double)arg1;
- (BOOL)_hasUserUpdatesInProgress;
- (void)_didExecuteUserActionsNotification:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

