//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/EFCancelable-Protocol.h>

@class NSArray, NSError, NSString;

@protocol ECNWConnectionWrapper <EFCancelable>
@property(copy, nonatomic) CDUnknownBlockType serverTrustHandler;
@property(copy, nonatomic) CDUnknownBlockType networkActivityChangeBlock;
@property(readonly) NSError *error;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BOOL isConstrained;
@property(readonly, nonatomic) BOOL isCellularConnection;
@property(readonly, nonatomic) BOOL isWritable;
@property(readonly, nonatomic) BOOL isReadable;
@property(readonly, nonatomic) NSString *sourceIPAddressString;
@property(readonly, nonatomic) unsigned int remotePortNumber;
@property(readonly, nonatomic) NSString *remoteHostname;
@property(readonly, copy, nonatomic) NSString *service;
@property(readonly, copy, nonatomic) NSArray *serverCertificates;
@property(copy, nonatomic) NSString *connectionServiceType;
@property(copy, nonatomic) NSString *networkAccountIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSArray *clientCertificates;
@property(nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;
@property(nonatomic) BOOL usesOpportunisticSockets;
@property(nonatomic) BOOL allowsTrustPrompt;
@property(nonatomic) unsigned int timeout;
- (void)close;
- (long long)readBytesIntoBuffer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (BOOL)connectToHost:(NSString *)arg1 withPort:(unsigned int)arg2 service:(NSString *)arg3;
- (void)unregisterForBytesAvailable;
- (void)registerForBytesAvailableWithHandler:(void (^)(void))arg1;
- (BOOL)setSecurityProtocol:(NSString *)arg1;
- (NSString *)securityProtocol;
- (void)enableThroughputMonitoring:(BOOL)arg1;
@end

