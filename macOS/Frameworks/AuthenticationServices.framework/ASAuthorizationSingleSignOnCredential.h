//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationCredential-Protocol.h>

@class NSArray, NSData, NSHTTPURLResponse, NSString;

@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential>
{
    NSString *_state;
    NSData *_accessToken;
    NSData *_identityToken;
    NSArray *_authorizedScopes;
    NSHTTPURLResponse *_authenticatedResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
+ (id)emptyCredential;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSHTTPURLResponse *authenticatedResponse; // @synthesize authenticatedResponse=_authenticatedResponse;
@property(readonly, copy, nonatomic) NSArray *authorizedScopes; // @synthesize authorizedScopes=_authorizedScopes;
@property(readonly, copy, nonatomic) NSData *identityToken; // @synthesize identityToken=_identityToken;
@property(readonly, copy, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAuthenticatedResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

