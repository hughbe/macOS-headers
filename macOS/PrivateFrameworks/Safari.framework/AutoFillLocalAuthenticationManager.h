//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface AutoFillLocalAuthenticationManager : NSObject
{
    NSOperationQueue *_authenticationQueue;
    LAContext *_laContext;
    NSObject<OS_dispatch_queue> *_laContextQueue;
    long long _currentTouchIDStatus;
}

+ (long long)_touchIDStatusForError:(long long)arg1;
- (void).cxx_destruct;
@property long long currentTouchIDStatus; // @synthesize currentTouchIDStatus=_currentTouchIDStatus;
@property(readonly, nonatomic) BOOL isBiometricAuthenticationAvailable;
- (void)updateTouchIDSupportAndAvailability;
- (id)authenticateWithReason:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

