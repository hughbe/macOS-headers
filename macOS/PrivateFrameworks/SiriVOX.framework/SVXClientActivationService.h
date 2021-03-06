//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXClientActivationServicing-Protocol.h>
#import <SiriVOX/SVXClientServiceConsuming-Protocol.h>

@class NSMutableArray, NSString, NSUUID, SVXActivationContext;
@protocol SVXClientActivationServiceDelegate, SVXClientServiceProviding, SVXPerforming;

@interface SVXClientActivationService : NSObject <SVXClientActivationServicing, SVXClientServiceConsuming>
{
    id <SVXPerforming> _performer;
    id <SVXClientServiceProviding> _clientServiceProvider;
    NSMutableArray *_queuedButtonEvents;
    SVXActivationContext *_lastButtonActivationContext;
    NSUUID *_preheatToken;
    id <SVXClientActivationServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SVXClientActivationServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_preheatTimerArrivedWithToken:(id)arg1;
- (void)_stopPreheatTimer;
- (void)_startPreheatTimer;
- (void)_preheatWithActivationSource:(long long)arg1;
- (void)_transitToAutomaticEndpointing;
- (void)_performManualEndpointing;
- (void)_deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prewarmWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_requestPermissionToActivateWithContext:(id)arg1;
- (void)_processLastButtonActivationContext;
- (void)_enqueueButtonEvent:(id)arg1;
- (void)deactivateWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateWithSystemEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prewarmForSystemEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateWithButtonEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activateWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueButtonEvent:(id)arg1;
- (void)handleButtonEvent:(id)arg1;
- (void)clientServiceDidChange;
- (id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2;
- (void)handleDidDeactivateWithContext:(id)arg1;
- (void)handleWillDeactivateWithContext:(id)arg1;
- (void)handleDidNotActivateWithContext:(id)arg1 error:(id)arg2;
- (void)handleDidActivateWithContext:(id)arg1;
- (void)handleWillActivateWithContext:(id)arg1;
- (void)handleRequestPermissionToActivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

