//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession
{
    MRCoreUtilsPairingSession *_pairingSession;
    MRCryptoPairingSessionBlockDelegate *_pairingDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property(retain, nonatomic) MRCoreUtilsPairingSession *pairingSession; // @synthesize pairingSession=_pairingSession;
- (BOOL)_useSystemPairing;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)_openSecuritySessionInState:(unsigned long long)arg1 useSystemPairing:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)open;
- (void)setDelegate:(id)arg1;
- (id)updatePeer;
- (id)removePeer;
- (id)pairedDevices;
- (BOOL)isPaired;
- (BOOL)isValid;
@property(readonly, nonatomic, getter=isUsingSystemPairing) BOOL usingSystemPairing;
@property(readonly, nonatomic) BOOL hasExchangedMessage;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithDevice:(id)arg1;

@end

