//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class ACAccount, NSDictionary;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>
{
    ACAccount *_account;
    NSDictionary *_serverResponse;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

