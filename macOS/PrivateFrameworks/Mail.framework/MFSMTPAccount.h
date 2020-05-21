//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFDeliveryAccount.h>

@class ECSMTPAccount, MFSMTPConnection, NSOperationQueue, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount
{
    MFSMTPConnection *_connection;
    id _smtpAccountLock;
    NSTimer *_timer;
    NSOperationQueue *_connectionCleanupQueue;
    long long _lastTimerSetTime;
}

+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
- (void).cxx_destruct;
@property(nonatomic) long long lastTimerSetTime; // @synthesize lastTimerSetTime=_lastTimerSetTime;
@property(readonly, nonatomic) NSOperationQueue *connectionCleanupQueue; // @synthesize connectionCleanupQueue=_connectionCleanupQueue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_disconnect:(id)arg1;
- (void)releaseAllConnections;
- (void)_connectionExpired:(id)arg1;
- (void)_setTimer;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (void)checkInConnection:(id)arg1;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (id)saslProfileName;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;
- (id)newDelivererWithMessage:(id)arg1;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (id)objectSpecifier;

// Remaining properties
@property(readonly) ECSMTPAccount *baseAccount; // @dynamic baseAccount;

@end

