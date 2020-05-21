//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPStateUIProvider-Protocol.h>

@class NSString;

@interface CDPToolFakeUIProvider : NSObject <CDPStateUIProvider>
{
    NSString *_localSecret;
    NSString *_remoteSecret;
    NSString *_icsc;
    NSString *_recoveryKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSString *icsc; // @synthesize icsc=_icsc;
@property(copy, nonatomic) NSString *remoteSecret; // @synthesize remoteSecret=_remoteSecret;
@property(copy, nonatomic) NSString *localSecret; // @synthesize localSecret=_localSecret;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

