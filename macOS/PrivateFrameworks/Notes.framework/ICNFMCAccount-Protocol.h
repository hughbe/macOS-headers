//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class ICNFMCAuthScheme, ICNFMCConnection, ICNFMCError, NSArray, NSString, NSURL;

@protocol ICNFMCAccount <NSObject>
+ (void)saveAccountInfoToDefaults;
+ (NSString *)accountTypeString;
@property(readonly, copy) NSString *subscriptionURLLabel;
@property(readonly) NSURL *subscriptionURL;
@property BOOL usesSSL;
@property BOOL shouldUseAuthentication;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *clientInfo;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *sessionPassword;
@property(copy) NSString *password;
@property(copy) NSString *username;
@property(retain) ICNFMCAuthScheme *preferredAuthScheme;
@property long long securityLayerType;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property long long portNumber;
@property(copy) NSString *hostname;
@property(copy) NSString *canonicalEmailAddress;
@property BOOL allowInsecureAuthentication;
@property BOOL configureDynamically;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(copy) NSString *displayName;
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSString *accountTypeString;
- (BOOL)canAuthenticateWithScheme:(ICNFMCAuthScheme *)arg1;
- (ICNFMCConnection *)authenticatedConnection;
- (ICNFMCConnection *)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (void)respondToHostBecomingReachable;
- (BOOL)connectAndAuthenticate:(ICNFMCConnection *)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(ICNFMCError *)arg1 host:(NSString *)arg2 didPromptUser:(char *)arg3;
- (BOOL)autodiscoverSettings:(id *)arg1;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
- (void)setTLSIdentity:(struct __SecIdentity *)arg1;
- (struct __SecIdentity *)copyTLSIdentity;

@optional
@property(copy) NSString *externalHostname;
@end

