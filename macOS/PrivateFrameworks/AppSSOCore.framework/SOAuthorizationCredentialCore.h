//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSOCore/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSHTTPURLResponse;

@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding>
{
    NSDictionary *_httpAuthorizationHeaders;
    NSHTTPURLResponse *_httpResponse;
    NSData *_httpBody;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSDictionary *httpAuthorizationHeaders; // @synthesize httpAuthorizationHeaders=_httpAuthorizationHeaders;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthorizationCredential:(id)arg1;

@end

