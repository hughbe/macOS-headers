//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class NSString;

@protocol ECAuthenticationCredentials <NSObject>
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(readonly, copy) NSString *clientInfo;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *password;
@property(readonly, copy) NSString *username;
@end

