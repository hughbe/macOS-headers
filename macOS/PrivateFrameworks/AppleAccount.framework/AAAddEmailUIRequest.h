//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAddEmailUIRequest : AARequest
{
    ACAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

