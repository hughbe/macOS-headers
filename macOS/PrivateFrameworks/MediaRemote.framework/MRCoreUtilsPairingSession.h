//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRPasscodeCredentials, NSArray, NSData, NSMutableData, NSMutableDictionary, NSObject, NSString, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession
{
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate *_pairingSession;
    struct {
        void *context;
        CDUnknownFunctionPointerType showSetupCode_f;
        CDUnknownFunctionPointerType hideSetupCode_f;
        CDUnknownFunctionPointerType promptForSetupCode_f;
        CDUnknownFunctionPointerType copyIdentity_f;
        CDUnknownFunctionPointerType findPeer_f;
        CDUnknownFunctionPointerType savePeer_f;
        CDUnknownFunctionPointerType resumeRequest_f;
        CDUnknownFunctionPointerType resumeResponse_f;
    } _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasExchangedMessage;
    unsigned int _pairingFlags;
    unsigned long long _state;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property(nonatomic) unsigned int pairingFlags; // @synthesize pairingFlags=_pairingFlags;
@property(readonly, nonatomic) BOOL hasExchangedMessage; // @synthesize hasExchangedMessage=_hasExchangedMessage;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_onQueueDeriveEncryptionKeys;
- (void)_handleSetupExchangeComplete;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id *)arg2;
- (id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1;
- (void)_handlePairingCompleteWithError:(id)arg1;
- (void)_handlePairingFailureWithError:(id)arg1;
- (int)_promptForSetupCodeWithDelay:(double)arg1;
- (void)_hideSetupCode;
- (int)_displaySetupCode:(id)arg1;
- (id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1;
- (id)extendedPeerInfo;
- (void *)_createDeviceFromPeer:(id)arg1;
- (id)_createPeerDeviceFromPeer:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *mediaRemotePairedDevices;
@property(readonly, nonatomic) NSArray *pairedPeerDevices;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *pairedPeerDevice;
@property(readonly, nonatomic) NSString *peerIdentifier;
- (id)updatePeer;
- (id)removePeer;
- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;
- (void)retry;
- (BOOL)shouldAutoRetry;
- (BOOL)shouldAutoRetryPairingExchange:(id)arg1;
- (void)openInState:(unsigned long long)arg1;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)open;
- (id)pairedDevices;
- (BOOL)isPaired;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;

@end

