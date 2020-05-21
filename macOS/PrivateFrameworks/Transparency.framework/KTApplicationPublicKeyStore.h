//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, TransparencyManagedDataStore, TransparencyTrustedKeyStore, VRFPublicKey;

@interface KTApplicationPublicKeyStore : NSObject
{
    int _vrfType;
    VRFPublicKey *_vrfKey;
    TransparencyTrustedKeyStore *_appKeyStore;
    TransparencyTrustedKeyStore *_tltKeyStore;
    unsigned long long _patLogBeginningMs;
    unsigned long long _tltLogBeginningMs;
    NSString *_application;
    TransparencyManagedDataStore *_dataStore;
    NSData *_patConfigProof;
    NSDictionary *_trustedAppSigningKeys;
    NSArray *_trustedAppLeafs;
    NSDictionary *_trustedTltSigningKeys;
    NSArray *_trustedTltLeafs;
    NSArray *_trustedIntermediates;
}

- (void).cxx_destruct;
@property(retain) NSArray *trustedIntermediates; // @synthesize trustedIntermediates=_trustedIntermediates;
@property(retain) NSArray *trustedTltLeafs; // @synthesize trustedTltLeafs=_trustedTltLeafs;
@property(retain) NSDictionary *trustedTltSigningKeys; // @synthesize trustedTltSigningKeys=_trustedTltSigningKeys;
@property(retain) NSArray *trustedAppLeafs; // @synthesize trustedAppLeafs=_trustedAppLeafs;
@property(retain) NSDictionary *trustedAppSigningKeys; // @synthesize trustedAppSigningKeys=_trustedAppSigningKeys;
@property int vrfType; // @synthesize vrfType=_vrfType;
@property(retain) NSData *patConfigProof; // @synthesize patConfigProof=_patConfigProof;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) NSString *application; // @synthesize application=_application;
@property unsigned long long tltLogBeginningMs; // @synthesize tltLogBeginningMs=_tltLogBeginningMs;
@property unsigned long long patLogBeginningMs; // @synthesize patLogBeginningMs=_patLogBeginningMs;
@property(retain) TransparencyTrustedKeyStore *tltKeyStore; // @synthesize tltKeyStore=_tltKeyStore;
@property(retain) TransparencyTrustedKeyStore *appKeyStore; // @synthesize appKeyStore=_appKeyStore;
@property(retain) VRFPublicKey *vrfKey; // @synthesize vrfKey=_vrfKey;
- (id)createTLTApplicationPublicKeyStore;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 error:(id *)arg4;
- (BOOL)processDiskState:(id)arg1 error:(id *)arg2;
- (id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 error:(id *)arg4;
- (void)startLogBeginTimesSampler;
- (BOOL)processPublicKeysResponse:(id)arg1 error:(id *)arg2;
- (BOOL)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 saveTreeHeads:(BOOL)arg5 error:(id *)arg6;
- (BOOL)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 error:(id *)arg3;
- (id)copyVRFKeyFromConfigProof:(id)arg1 saveTreeHeads:(BOOL)arg2 error:(id *)arg3;
- (BOOL)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id *)arg4;
- (id)copyKeyStoreState;
- (void)clearState:(id *)arg1;
@property(readonly) BOOL ready;

@end

