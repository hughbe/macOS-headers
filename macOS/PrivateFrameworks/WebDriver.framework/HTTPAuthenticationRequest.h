//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HTTPAuthenticationRequest : NSObject
{
    BOOL isBasic;
    BOOL isDigest;
    NSString *base64Credentials;
    NSString *username;
    NSString *realm;
    NSString *nonce;
    NSString *uri;
    NSString *qop;
    NSString *nc;
    NSString *cnonce;
    NSString *response;
}

- (void).cxx_destruct;
- (id)nonquotedSubHeaderFieldValue:(id)arg1 fromHeaderFieldValue:(id)arg2;
- (id)quotedSubHeaderFieldValue:(id)arg1 fromHeaderFieldValue:(id)arg2;
- (id)response;
- (id)cnonce;
- (id)nc;
- (id)qop;
- (id)uri;
- (id)nonce;
- (id)realm;
- (id)username;
- (id)base64Credentials;
- (BOOL)isDigest;
- (BOOL)isBasic;
- (id)initWithRequest:(id)arg1;

@end

