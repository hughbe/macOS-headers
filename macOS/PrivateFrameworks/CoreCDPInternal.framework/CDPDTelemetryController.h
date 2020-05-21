//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDTelemetryController : NSObject
{
}

+ (id)sharedInstance;
- (void)stateMachineStartedFromClient:(unsigned long long)arg1;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2;
- (void)signInWithUserElectingResetProtectedData;
- (void)signInWithUserSkippingFlow;
- (void)stateMachineFailureDueToSyncFailure;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)piggybackSuccess;
- (void)piggybackAttempt;
- (void)didUnlockAccount;
- (void)didLockAccount;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)didRemoveLocalSecret;
- (void)didAttemptEscrowPreRecord;
- (void)didChangeLocalSecret;

@end

