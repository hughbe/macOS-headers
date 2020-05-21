//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKSubcredentialProvisioningSessionOperation.h>

@class PKAppletSubcredential, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationReceipt, PKAppletSubcredentialSharingRequest, PKPaymentWebService;

@interface PKSubcredentialProvisioningSendInvitationOperation : PKSubcredentialProvisioningSessionOperation
{
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKAppletSubcredentialSharingInvitation *_invitation;
    PKAppletSubcredential *_credential;
    PKPaymentWebService *_localDeviceWebService;
    PKPaymentWebService *_remoteDeviceWebService;
    PKAppletSubcredentialSharingInvitationReceipt *_invitationReceipt;
    BOOL _hasFinished;
}

- (void).cxx_destruct;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)userAuthDelegate;
- (id)sharingSession;
- (void)sendInvitationWithAuth:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendInvitation;
- (void)performOperation;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;

@end

