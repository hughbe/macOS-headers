//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUIFoundation/LAUIDelegate-Protocol.h>

@class LAContext, NSMutableArray, PKAuthenticator, PKAuthenticatorEvaluationRequest;
@protocol OS_dispatch_source, PKAuthenticatorDelegate;

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate>
{
    PKAuthenticator *_authenticator;
    double _evaluationMinimumTime;
    CDUnknownBlockType _completionHandler;
    double _touchIDBeginTime;
    NSObject<OS_dispatch_source> *_liftFingerTimeout;
    NSMutableArray *_accessHandlers;
    _Bool _usingExternalContext;
    unsigned long long _externalContextInvalidationPolicy;
    unsigned long long _externalContextOptions;
    LAContext *_LAContext;
    unsigned long long _activeMechanisms;
    unsigned long long _completedMechanisms;
    _Bool _invalidated;
    _Bool _supported;
    _Bool _policySupported;
    _Bool _fingerPresent;
    _Bool _passcodeActive;
    _Bool _passphraseActive;
    _Bool _shouldLiftFinger;
    _Bool _fingerPresentTimeoutRequired;
    _Bool _fingerPresentTimeoutExpired;
    PKAuthenticatorEvaluationRequest *_request;
    long long _policy;
    unsigned long long _presentationFlags;
    id <PKAuthenticatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long presentationFlags; // @synthesize presentationFlags=_presentationFlags;
@property(readonly, nonatomic) _Bool fingerPresentTimeoutExpired; // @synthesize fingerPresentTimeoutExpired=_fingerPresentTimeoutExpired;
@property(readonly, nonatomic) _Bool fingerPresentTimeoutRequired; // @synthesize fingerPresentTimeoutRequired=_fingerPresentTimeoutRequired;
@property(readonly, nonatomic) _Bool shouldLiftFinger; // @synthesize shouldLiftFinger=_shouldLiftFinger;
@property(readonly, nonatomic) _Bool passphraseActive; // @synthesize passphraseActive=_passphraseActive;
@property(readonly, nonatomic) _Bool passcodeActive; // @synthesize passcodeActive=_passcodeActive;
@property(readonly, nonatomic) _Bool fingerPresent; // @synthesize fingerPresent=_fingerPresent;
@property(readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property(readonly, nonatomic, getter=isPolicySupported) _Bool policySupported; // @synthesize policySupported=_policySupported;
@property(readonly, nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(readonly, nonatomic) PKAuthenticatorEvaluationRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) _Bool biometricMatch;
- (BOOL)_delegateSupportsPassphraseDismissal;
- (BOOL)_delegateSupportsPassphrasePresentation;
- (BOOL)_delegateSupportsPasscodeDismissal;
- (BOOL)_delegateSupportsPasscodePresentation;
- (void)_clearLiftFingerTimer;
- (void)_handleLiftFinger;
- (void)_setLiftFingerTimer;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleTouchIDEventWithParameters:(id)arg1;
- (void)handlePassphraseEventWithParameters:(id)arg1;
- (void)handlePasscodeEventWithParameters:(id)arg1;
- (void)_requestRemoteAuthenticatorViewControllerOfType:(long long)arg1 withClassName:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentAuthenticatorViewOfType:(long long)arg1 withParams:(id)arg2;
- (void)_dismissAuthenticatorViewOfType:(long long)arg1;
- (unsigned long long)_didPresentFlagForAuthenticatorViewType:(long long)arg1 custom:(BOOL)arg2;
- (unsigned long long)_presentationFlagForAuthenticatorViewType:(long long)arg1;
- (void)evaluateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accessLAContext:(CDUnknownBlockType)arg1;
- (void)_createContextWithExternalizedContext:(id)arg1;
- (void)fallbackToPasscode;
- (void)invalidateWithIntent:(long long)arg1;
- (void)invalidate;
- (CDUnknownBlockType)hoistCompletionHandler;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 forAuthenticator:(id)arg3;
- (id)init;

@end

