//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAFMIPAuthenticateRequest : AARequest
{
    ACAccount *_account;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)arg1;
- (id)urlString;

@end

