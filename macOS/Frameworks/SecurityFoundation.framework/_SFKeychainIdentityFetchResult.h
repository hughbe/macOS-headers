//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class _SFIdentity;

@interface _SFKeychainIdentityFetchResult : _SFKeychainFetchResult
{
    id _identityFetchResult;
}

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly) _SFIdentity *value; // @dynamic value;

@end

