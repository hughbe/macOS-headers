//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCControlChannel.h>

#import <AVConference/VCControlChannelTransactionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate>
{
    unsigned int _transportSessionID;
    int _vfdMessage;
    int _vfdCancel;
    BOOL _isRunning;
    struct _opaque_pthread_t *_pidReceiveProc;
    NSMutableDictionary *_dialogs;
    NSMutableArray *_activeParticipants;
    BOOL _isCCReliableDataNotReceivedReported;
    BOOL _isEncryptionEnabled;
    NSMutableDictionary *_cryptors;
    void *_currentSendMKI;
    void *_currentReceiveMKI;
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;
}

@property(readonly) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(readonly) BOOL isEncryptionEnabled; // @synthesize isEncryptionEnabled=_isEncryptionEnabled;
@property(readonly, nonatomic) NSMutableDictionary *dialogs; // @synthesize dialogs=_dialogs;
@property(nonatomic) int vfdCancel; // @synthesize vfdCancel=_vfdCancel;
@property(nonatomic) int vfdMessage; // @synthesize vfdMessage=_vfdMessage;
@property(nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
- (void)flushReportingStats;
- (void)flushRealTimeReportingStats;
- (void)deregisterPeriodicTask;
- (void)registerPeriodicTask;
- (void)periodicTask:(void *)arg1;
- (id)lastUsedMKIBytes;
- (BOOL)isParticipantActive:(unsigned long long)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)addNewKeyMaterial:(id)arg1;
- (void)scheduleAfter:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllActiveParticipants;
- (void)removeActiveParticipant:(unsigned long long)arg1;
- (void)addActiveParticipant:(unsigned long long)arg1;
- (void)broadcastUnreliableMessage:(id)arg1;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (BOOL)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 timeout:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 timeout:(id)arg3;
- (BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (void)messageReceived:(id)arg1 participantInfo:(CDStruct_94aa5fb4 *)arg2;
- (id)processEncryptedPayload:(id)arg1 isData:(BOOL)arg2 sequenceNumber:(id)arg3 MKIData:(id)arg4 participantID:(id)arg5;
- (BOOL)decryptMessageWithMKI:(void *)arg1 message:(id)arg2 buffer:(char *)arg3 size:(unsigned int)arg4 sequenceNumber:(unsigned short)arg5;
- (void)flushActiveMessages;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 mode:(int)arg3;
- (BOOL)decryptWithMKI:(void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (BOOL)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;
- (int)updateEncryption:(CDStruct_5b6da142 *)arg1 derivedSSRC:(unsigned int)arg2;
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int *)arg3;
- (void)setCurrentSendMKIWithKeyMaterial:(id)arg1;
- (void)updateEncryptionWithKeyMaterial:(id)arg1;
- (void)updateEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)initializeSRTPInfo:(struct tagSRTPINFO *)arg1;
- (void)finalizeEncryption;
- (void)initializeEncryption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

